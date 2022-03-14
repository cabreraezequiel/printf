#include "main.h"

/**
 * _printf - printf
 * @str: string
 * Return: int
 */

int _printf(const char *str, ...)
{
	int count = 0, n = 0, i = 0, zrs = 0, j = 0;
	char *zerocount;
	va_list ap;
	Tformat form[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_d},
		{"i", print_i},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"r", print_r},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"R", print_rot},
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
			if (str[n] == '\0')
			{
				return (-1);
			}
			if (str[n] == '0')
			{
				n++;
				zerocount = malloc(sizeof(str));
				while (str[n] >= '0' && str[n] <= '9')
				{
					zerocount[j] = str[n];
					j++, n++;
				}
				zrs = atoi(zerocount) - j;
				free(zerocount);
				for (j = 0; j < zrs; j++)
				{
					_putchar('0');
				}
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
