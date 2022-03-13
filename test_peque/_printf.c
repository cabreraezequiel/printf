#include "main.h"

/**
 * _printf - printf
 * @str - string
 * Resturn: int
 */

int _printf(const char *str, ...)
{
	int count = 0, n = 0, i = 0, spaces = 0, j = 0;
	va_list ap;
	Tformat form[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		{"S", print_S},
		{"R", print_rot},
		{NULL, NULL}
	};
	char *pluscount;

	va_start(ap, str);

	if (!str || (str[0] == '%' && str[1] == '\0'))
		return (-1);

	while (str[n] != '\0')
	{
		if (str[n] == '%')
		{
			n++;
			if (str[n] == '+')
			{
				n++;
				pluscount = malloc(sizeof(str));
				while (str[n] >= '0' && str[n] <= '9')
				{
					pluscount[j] = str[n];
					j++, n++;
				}
				spaces = atoi(pluscount);
				free(pluscount);
				for (j = 0; j < spaces; j++)
				{
					_putchar(' ');
				}
			}

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
