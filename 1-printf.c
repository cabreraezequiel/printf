#include "main.h"

/**
 * print_number - Entry point
 * @n : int
 *
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}

/**
 * print_i - print i
 * @i : int
 * Return: strlen
 */

int print_i(va_list i)
{
	int n = va_arg(i, int), cont = 1;

	print_number(n);

	if (n < 0)
	{
		cont++;
	}
	while (n / 10 != 0)
	{
		cont++;
		n = n / 10;
	}

	return (cont);
}

/**
 * print_d - print d
 * @d : decmal
 * Return: strlen
 */

int print_d(va_list d)
{
	int n = va_arg(d, int);
	int cont = 1;

	print_number(n);

	if (n < 0)
	{
		cont++;
	}
	while (n / 10 != 0)
	{
		cont++;
		n = n / 10;
	}

	return (cont);
}
