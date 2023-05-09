#include <stdarg.h>
#include <unistd.h>

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

int ft_printf(const char *format, ...);
int ft_strlen(char *str);
int ft_putstr(char *str);
int ft_putnbr_base(unsigned long n, char *base);
int ft_putchar(char c);
int print_char(int c);
int print_str(char *str);
int print_pointer(void *ptr);
int print_decimal(int n);
int print_unsigned(unsigned int n);
int print_hexadecimal(unsigned int n, int uppercase);

#endif






