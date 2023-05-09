#include "ft_printf.h"

//It is used to print strings that are passed as arguments to ft_printf.
int     ft_putstr(char *str)
{
    int len;

    if(!str) 
    {
        return (write(1, "(null)", 6));
    }
    len = ft_strlen(str);
    write(1, str, len);
    return (len);
}
