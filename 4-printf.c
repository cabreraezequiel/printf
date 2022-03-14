#include "main.h"

/**
 * print_number_u - Entry point
 * @n : int
 *
 */

void print_number_u(int n)
{
	unsigned int i = n;

	if (i / 10)
	{
		print_number_u(i / 10);
	}

	_putchar((i % 10) + '0');
}

/**
 * print_u - print u
 * @u : unsigned
 * Return: strlen
 */

int print_u(va_list u)
{
	unsigned int n = va_arg(u, int), cont = 1;

	print_number_u(n);

	while (n / 10 != 0)
	{
		cont++;
		n = n / 10;
	}

	return (cont);
}

/**
 * print_o - print o
 * @o : octal
 * Return: strlen
 */

int print_o(va_list o)
{
	unsigned int n = va_arg(o, int);
	int a[11];
	int i = 0, cont = 0;

	if (n == 0)
	{
		_putchar('0');
		cont++;
	}
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 8;
		n = n / 8;
		cont++;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar(a[i] + '0');
	}
	return (cont);
}

/**
 * print_x - print
 * @x: hexadecimal
 * Return: strlen
 */

int print_x(va_list x)
{
	char hexa[] = "0123456789abcdef";
	unsigned int n = va_arg(x, unsigned int);
	int a[8];
	int i = 0, cont = 0;

	if (n == 0)
	{
		_putchar('0');
		cont++;
	}

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

/**
 * print_X - print X
 * @X : hexadecimal
 * Return: strlen
 */

int print_X(va_list X)
{
	char hexa[] = "0123456789ABCDEF";
	unsigned long int n = va_arg(X, unsigned long int);
	int a[8];
	int i = 0, cont = 0;

	if (n == 0)
	{
		_putchar('0');
		cont++;
	}

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
