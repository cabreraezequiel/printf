#include "main.h"

/**
 * print_str - prints string
 * s - string
 */
void print_str(va_list s)
{
	int i = 0;

	for (i = 0, s[i] != '\0', i++)
	{
		write(1, s[i], 1);
	}
}
