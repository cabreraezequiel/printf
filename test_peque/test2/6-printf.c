#include "main.h"

/**
 * print_p - print p
 * @p : addres
 * Return: strlen
 */

int print_p(va_list p)
{
	char hexa[] = "0123456789abcdef";
	unsigned long int n = va_arg(p, unsigned long int);
	int a[20];
	int i = 0, cont = 0;

	_putchar('0');
	_putchar('x');
	cont += 2;
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 16;
		n = n / 16;
		cont++;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar(hexa[a[i]]);
	}
	return (cont);
}
