#include "ft_printf.h"

//It is used to determine the length of a string so that it can be printed using ft_putstr.

int     ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}