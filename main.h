#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

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

#endif /* MAIN_H */
