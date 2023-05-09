#include "ft_printf.h"

int     print_hexadecimal(unsigned int n, int uppercase)
{
    char    *base;
    int     len;

    base = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    len = 0;
    if (n >= 16)
        len += print_hexadecimal(n / 16, uppercase);
    len += ft_putchar(base[n % 16]);
    return (len);
}