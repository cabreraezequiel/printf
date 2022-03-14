#include "main.h"

/**
 * print_rot - print rot
 * @R : str
 * Return: strlen
 */

int print_rot(va_list R)
{
	char *aux = va_arg(R, char *);
	int i = 0, j = 0, m = 0, cont = 0;
	char abc[26] = "ABCDEFGHIJKLMabcdefghijklm";
	char rot[26] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	if (aux == NULL)
	{
		aux = "(null)";
		return (0);
	}

	for (i = 0; aux[i] != '\0'; i++)
	{
		m = 0;
		for (j = 0; abc[j] != '\0'; j++)
		{
			if (aux[i] == abc[j])
			{
				_putchar(rot[j]);
				m = 1;
				cont++;
			}
		}
		for (j = 0; rot[j] != '\0'; j++)
		{
			if (aux[i] == rot[j])
			{
				_putchar(abc[j]);
				m = 1;
				cont++;
			}
		}
		if (m != 1)
		{
			_putchar(aux[i]);
			cont++;
		}
	}
	return (i);
}
