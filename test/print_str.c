#include "main.h"

/**
 * print_str - prints string
 * s - string
 */
void print_str(va_list s)
{
	int i = 0;
	char *str = va_arg(s, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, str[i], 1);
	}
}
