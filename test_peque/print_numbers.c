#include "main.h"
/**
 * print_number - Entry point
 * @n : int
 * Return: 0
 */

int print_number(int n, int cont)
{
	 unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
		cont++;
	}

	if (i / 10)
		print_number(i / 10, cont++);

	_putchar((i % 10) + '0');

	return (cont);
}

/**
 * print_i - print i
 * @i : int
 * Return: strlen
 */

int print_i(va_list i)
{
	int n = va_arg(i, int);

	return (print_number(n, 0));
}

/**
 * print_d - print d
 * @d : decmal
 * Return: strlen
 */

int print_d(va_list d)
{
	int n = va_arg(d, int);

        return (print_number(n, 0));
}

/**
 * print_b - print b
 * @b : b
 * Return: 0
 */

int print_b(va_list b)
{
	int n = va_arg(b, int);
	int a[100];
	int i = 0;

	for(i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
	}
	for(i -= 1; i >= 0; i--)
	{
		_putchar(a[i] + '0');
	}
	return (0);
}
