#include "main.h"

/**
 * print_b - print b
 * @b : binario
 * Return: strlen
 */

int print_b(va_list b)
{
	int n = va_arg(b, int);
	int *a;
	int i = 0, cont = 0;

	a = malloc(sizeof(a) * n);
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
		cont++;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar(a[i] + '0');
	}
	free(a);
	return (cont);
}
