#include "main.h"
/**
 * aux - printf
 * @c : char
 * Return: int
 */

int (*aux(char c))(va_list)
{
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
	int i;

	for (i = 0; form[i].op != NULL; i++)
	{
		if (c == *form[i].op)
			break;
	}
	return (form[i].f);
}



/**
 * _printf - printf
 * @str : string
 * Return: int
 */

int _printf(const char *str, ...)
{
	int count = 0, n = 0;
	va_list ap;

	if (str == NULL || (str[0] == '%' && str[1] == '\0'))
		return (-1);

	va_start(ap, str);

	while (str && str[n])
	{
		if (str[n] == '%')
		{
			n++;
			if (str[n] == '\0')
			{
				return (-1);
			}
			if (str[n] == '%')
			{
				count++;
				_putchar('%');

			}
			else
			{
			if (aux(str[n]) != NULL)
			{
				count += aux(str[n])(ap);
			}
			if (aux(str[n]) == NULL)
			{
				_putchar('%');
				_putchar(str[n]);
				count += 2;
			}
			}
			n++;
		}
		else
		{
			_putchar(str[n]);
			count++;
			n++;
		}
	}
	va_end(ap);
	return (count);
}
