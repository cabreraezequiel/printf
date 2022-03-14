#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct format - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct format
{
	char *op;
	int (*f)(va_list);

} Tformat;

int _putchar(char c);
int _printf(const char *str, ...);
int print_char(va_list c);
int print_str(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_r(va_list r);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);

#endif /* MAIN_H */
