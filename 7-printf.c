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
	int i = 0, j = 0, cont = 0;
	int n = 0;
	int a[10];
	
	if (aux == NULL)
	{	
		return(0);
	}
	for (i = 0; aux[i]; i++)
	{
		n = aux[i];
		if (n > 0 && n < 32)
		{
			_putchar('\\');
			_putchar('x');
			cont += 2;
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
				cont++;
			}
		}
		else
		{
			_putchar(aux[i]);
			cont++;
		}
	}
	return (cont);
}
