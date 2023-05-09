#include "ft_printf.h"

// int     print_pointer(void *ptr)
// {
//     char        *hex;
//     unsigned long long  p;
//     int         len;

//     hex = "0123456789abcdef";
//     p = (unsigned long long)ptr;
//     len = 0;
//     write(1, "0x", 2);
//     len += 2;
//     if (p >= 16)
//     {
//         len += print_pointer((void*)(p / 16));
//     }
//     return (len + ft_putchar(hex[p % 16]));
// }


int     ft_putnbr_base(unsigned long n, char *base)
{
    int len;

    len = 0;
    if (n >= (unsigned long)ft_strlen(base))
    {
        len += ft_putnbr_base(n / ft_strlen(base), base);
    }
    len += ft_putchar(base[n % ft_strlen(base)]);
    return (len);
}

int     print_pointer(void *ptr)
{
    unsigned long   addr;
    int             len;

    addr = (unsigned long)ptr;
    len = ft_putstr("0x");
    len += ft_putnbr_base(addr, "0123456789abcdef");
    return (len);
}

