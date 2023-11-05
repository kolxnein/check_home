#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int ft_printf(const char *str, ...);
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_hex_to_ptr(int n, int is_first);
int ft_putnbr(int n);
int ft_unsign_nbr(unsigned int n);
int ft_print_to_hex(unsigned int n, char c);

#endif