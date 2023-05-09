#include "ft_printf.h"

int print_decimal(int n) {
    int len = 0;

    if (n == -2147483648)
    {
        return (ft_putstr("-2147483648"));
    }
    if (n < 0) 
    {
        len += ft_putchar('-');
        n = -n;
    }
    if (n >= 10) 
    {
       len += print_decimal(n/10);
    }
    len += ft_putchar((n % 10) + 48);
    return len;
}