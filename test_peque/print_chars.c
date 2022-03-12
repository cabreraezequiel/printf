#include "main.h"

/**
 * print_char - prints char
 * c - character
 * Return: strlen
 */

int print_char(va_list c)
{
	int ch = va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * print_str - prints string
 * s - string
 * Return: strlen
 */

int print_str(va_list s)
{
	char *aux = va_arg(s, char *);
	int i = 0;

	if (aux == NULL)
	{
		aux = "(nil)";
		return (0);
	}

	for (i = 0; aux[i] != '\0'; i++)
	{
		_putchar(aux[i]);
	}
	return (i);
}
int print_S(va_list S)
{
	char hexa[] = "0123456789ABCDEF";
	char *aux = va_arg(S, char *);
	int i = 0, j = 0;
	unsigned int n = 0;
	int a[1];

	if (aux == NULL)
	{
		aux = "(nil)";
		return (0);
	}
        for (i = 0; aux[i] != '\0'; i++)
	{
		n = aux[i];
		if ((n > 0 && n < 32) || (n >= 127))
		{
			_putchar('\\');
			_putchar('x');
			_putchar((n / 16) + '0');
			for(j = 0; n > 0; j++)
			{
				a[j] = n % 16;
				n = n / 16;
			}
			for(j -= 1 ; j >= 0; j--)
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
