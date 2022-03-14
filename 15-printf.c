#include "main.h"

/**
 * print_rot - print rot
 * @R : str
 * Return: strlen
 */

int print_rot(va_list R)
{
	char *aux = va_arg(R, char *);
	int i = 0, j = 0;
	char abc[26] = "ABCDEFGHIJKLMabcdefghijklm";
	char rot[26] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	if (aux == NULL)
	{
		aux = "(nil)";
		return (0);
	}

	for (i = 0; aux[i] != '\0'; i++)
	{
		for (j = 0; abc[j] != '\0'; j++)
		{
			if (aux[i] == abc[j])
			{
				_putchar(rot[j]);
			}
		}
		for (j = 0; rot[j] != '\0'; j++)
		{
			if (aux[i] == rot[j])
			{
				_putchar(abc[j]);
			}
		}
	}
	return (i);
}
