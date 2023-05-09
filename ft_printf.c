#include "ft_printf.h"

int     ft_printf(const char *format, ...)
{
    va_list     args;
    int         len;
    int         i;

    va_start(args, format);
    len = 0;
    i = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
                len += ft_putchar(va_arg(args, int));
            else if (format[i] == 's')
                len += ft_putstr(va_arg(args, char *));
            else if (format[i] == 'p')
                len += print_pointer(va_arg(args, void *));
            else if (format[i] == 'd' || format[i] == 'i')
                len += print_decimal(va_arg(args, int));
            else if (format[i] == 'u')
                len += print_unsigned(va_arg(args, unsigned int));
            else if
        (format[i] == 'x')
            len += print_hexadecimal(va_arg(args, unsigned int), 0);
        else if (format[i] == 'X')
            len += print_hexadecimal(va_arg(args, unsigned int), 1);
        else if (format[i] == '%')
            len += ft_putchar('%');
    }
    else
        len += ft_putchar(format[i]);
    i++;
}
va_end(args);
return (len);
}