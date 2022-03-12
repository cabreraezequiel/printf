#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int t;
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    t = _printf("Length:[%d, %i]\n", len, len);
    printf("%d\n",t);
    t = printf("Length:[%d, %i]\n", len2, len2);
    printf("%d\n",t);
    t = _printf("Negative:[%d]\n", -762534);
    printf("%d\n",t);
    t = printf("Negative:[%d]\n", -762534);
    printf("%d\n",t);
    t = _printf("Unsigned:[%u]\n", ui);
    printf("%d\n",t);
    t = printf("Unsigned:[%u]\n", ui);
    printf("%d\n",t);
    _printf("Binario:[%b]\n", 98);
    printf("Binario:[%d]\n", 1100010);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
