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
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		{NULL, NULL}
	};

	va_start(ap, str);

	if (!str || (str[0] == '%' && str[1] == '\0'))
		return (-1);

	while (str[n] != '\0')
	{
		if (str[n] == '%')
		{
			n++;
			if (str[n] == '%')
			{
				count++;
				_putchar('%');
			}

			for (i = 0; form[i].op != NULL; i++)
			{
				if (str[n] == *form[i].op)
				{
					count =  count + form[i].f(ap);
				}
			}
			n++;
		}
		_putchar(str[n]);
		count++;
		n++;
	}
	va_end(ap);
	return (count);
}
