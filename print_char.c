#include "main.h"

/**
 * print_char - prints char
 * c - character
 */
void print_char(va_list c)
{
	write(1, c, 1);
}
