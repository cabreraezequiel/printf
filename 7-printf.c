#include "main.h"

/**
 * print_S - main
 * @S: string
 * Return: strlen
 */

int print_S(va_list S)
{
	char hexa[] = "0123456789ABCDEF";
	char *aux = va_arg(S, char *);
	int i = 0, j = 0;
	int n = 0;
	int a[10];

	if (!aux)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (5);
	}
	for (i = 0; aux[i]; i++)
	{
		n = aux[i];
		if (!(n >= 32 && n < 127))
		{
			_putchar('\\');
			_putchar('x');
			for (j = 0; n > 0; j++)
			{
				a[j] = n % 16;
				n = n / 16;
			}
			a[j] = n % 16;
			j++;
			for (j -= 1; j >= 0; j--)
			{
				_putchar(hexa[a[j]]);
			}
		}
		else
			_putchar(aux[i]);
	}
	return (0);
}
