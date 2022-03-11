#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

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


int _printf(const char *format, ...);
void print_char(va_list c);
void print_str(va_list s);
#endif /* MAIN_H */
