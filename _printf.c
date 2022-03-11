#include "main.h"

/**
 * _printf - printf
 * @format : string
 *
 */

int _printf(const char *format, ...)
{
	
Tformat form[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_d},
		{"i", print_int},
		{NULL, NULL}
	};
}
