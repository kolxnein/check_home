#include <unistd.h>

int ft_putchar(char c)
{
    return (write(1, &c, 1));
}

int ft_putstr(char *str)
{
    int i;
    int len;

    i = 0;
    len = 0;
    if (!str)
        return (ft_putstr("(null)"));
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
        len++;
    }
    return (len);
}
int ft_hex_to_ptr(unsigned long int n, int is_first)
{
    int len;

    len = 0;
    if (is_first == 1)
    {
        is_first = 0;
        len += ft_putstr("0x");
    }
    if (n >= 16)
        len += ft_hex_to_ptr(n / 16, is_first);
    ft_putchar("0123456789abcdef"[n % 16]);
    return (len);
}

int ft_putnbr(int n)
{
    int len;

    len = 0;
    if (n == -2147483648)
    {
        len += ft_putstr("-2147483648");
    }
    else if (n < 0)
    {
        len += ft_putchar('-');
        len += ft_putnbr(-n);
    }
    else if (n >= 10)
    {
        len += ft_putnbr(n / 10);
        len += ft_putnbr(n % 10);
    }
    else
        len += ft_putchar(n + 48);
    return (len);
}

int ft_unsign_nbr(unsigned int n)
{
    int len;

    len = 0;
    if (n >= 10)
    {
        len += ft_unsign_nbr(n / 10);
        len += ft_unsign_nbr(n % 10);
    }
    else
        len += ft_putchar(n + 48);
    return (len);
}

int ft_print_to_hex(unsigned int n, char c)
{
    int len;

    len = 0;
    if (n >= 16)
        len += ft_print_to_hex(n / 16, c);
    if (c == 'x')
        len += ft_putchar("0123456789abcdef"[n % 16]);
    else if (c == 'X')
        len += ft_putchar("0123456789ABCDEF"[n % 16]);
    return (len);
}