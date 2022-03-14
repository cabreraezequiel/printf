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
	unsigned long int n = 0;
	int a[10];

	if (aux == 0)
	{
		return (0);
	}
	for (i = 0; aux[i]; i++)
	{
		n = aux[i];
		if ((n > 0 && n < 32) || (n >= 127))
		{
			_putchar('\\');
			_putchar('x');
			_putchar(((n / 16) % 10) + '0');
			for (j = 0; n > 0; j++)
			{
				a[j] = n % 16;
				n = n / 16;
			}
			for (j -= 1; j >= 0; j--)
			{
				_putchar(hexa[a[j]]);
			}
		}
		else
		{
			_putchar(aux[i]);
		}
	}
	return (0);
}
