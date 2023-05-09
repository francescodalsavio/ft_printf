#include "ft_printf.h"

// It is used to print individual characters that are passed as arguments to ft_printf.
int     ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}