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
	void (*f)(va_list);

} Tformat;

int _putchar(char c);
int _printf(const char *str, ...);
void print_char(va_list c);
void print_str(va_list s);

#endif /* MAIN_H */
