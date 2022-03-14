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
    addr = ((void *)0x7ffe637541f0);
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
    t =_printf("Binario:[%b]\n", 98);
    printf("%d\n",t);
    t = printf("Binario:[%d]\n", 1100010);
    printf("%d\n",t);
    t = _printf("Unsigned octal:[%o]\n", ui);
    printf("%d\n",t);
    t = printf("Unsigned octal:[%o]\n", ui);
    printf("%d\n",t);
    t =_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("%d\n",t);
    t = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("%d\n",t);
    t = _printf("Character:[%c]\n", 'H');
    printf("%d\n",t);
    t = printf("Character:[%c]\n", 'H');
    printf("%d\n",t);
    t = _printf("String:[%r]\n", "I am a string !");
    printf("%d\n",t);
    t = printf("String:[%s]\n", "! gnirts a ma I");
    printf("%d\n",t);
    t = _printf("String:[%s]\n", "I am a string !");
    printf("%d\n",t);
    t = printf("String:[%s]\n", "I am a string !");
    printf("%d\n",t);
    t = _printf("Address:[%p]\n", addr);
    printf("%d\n",t);
    t = printf("Address:[%p]\n", addr);
    printf("%d\n",t);
    t = len = _printf("Percent:[%%]\n");
    printf("%d\n",t);
    t = len2 = printf("Percent:[%%]\n");
    printf("%d\n",t);
    t = _printf("Len:[%d]\n", len);
    printf("%d\n",t);
    t = printf("Len:[%d]\n", len2);
    printf("%d\n",t);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    _printf("S: %S\n", "Best\nSchool");
    printf("Best\x0ASchool\n");
    _printf("%010d chichos\n", 18);
    printf("%010d chichos\n", 18);
    _printf("%R\n", "Best\nSchool");
    printf("%R\n", "Best\nSchool");
    return (0);
}
