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
	unsigned int n = va_arg(d, int);

        return (print_number(n, 0));
}

/**
 * print_number_u - Entry point
 * @n : int
 * Return: 0
 */

int print_number_u(int n, int cont)
{
        unsigned int i = n;

        if (i / 10)
                print_number_u(i / 10, cont++);

        _putchar((i % 10) + '0');

        return (cont);
}

/**
 * print_u - print u
 * @u : unsigned
 * Return: strlen
 */

int print_u(va_list u)
{
	int n = va_arg(u, int);

        return (print_number_u(n, 0));
}

/**
 * print_b - print b
 * @b : binario
 * Return: strlen
 */

int print_b(va_list b)
{
if (b){}
return (0);
}

/**
 * print_o - print o
 * @o : octal
 * Return: strlen
 */

int print_o(va_list o)
{
if (o){}
return (0);
}
