#include "main.h"

/**
 * _printf - printf
 * @str - string
 * Resturn: int
 */

int _printf(const char *str, ...)
{
	int count = 0, n = 0, i = 0;
	va_list ap;
	Tformat form[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(ap, str);
		while (str[n] != '\0')
		{
			if (str[n] == '%')
			{
				n++;
				for (i = 0; form[i].op != NULL; i++)
				{
					if (str[n] == *form[i].op)
					{
						form[i].f(ap);
					}
				}
				n++;
			}
			_putchar(str[n]);
			n++;
		}
	va_end(ap);
	return (count);
}
