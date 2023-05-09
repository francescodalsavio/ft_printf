#include "ft_printf.h"

int main()
{
    int a = 42;
    char *str = "hello";
    void *ptr = &a;
    ft_printf("This is a test\n");
    ft_printf("a = %d\n", a);
    ft_printf("a = %u\n", a);
    ft_printf("str = %s\n", str);
    ft_printf("ptr = %p\n", ptr);
    ft_printf("42 in binary: %b\n", a);
    ft_printf("42 in octal: %o\n", a);
    ft_printf("42 in hex: %x\n", a);
    ft_printf("42 in HEX: %X\n", a);
    ft_printf("%%\n");
    return 0;
}
