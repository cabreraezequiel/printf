#include "main.h"

/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	int count = 0, n = 0, i = 0;
	va_list ap;
	Tformat form[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(ap, format);
		while (format[n] != '\0')
		{
			if (format[n] == '%')
			{
				n++;
				for (i = 0; form[i].op != NULL; i++)
				{
					if (format[n] == *form[i].op)
					{
						form[i].f(ap);
					}
				}
			}
			n++;
		}
	va_end(ap);
	return (count);
}
