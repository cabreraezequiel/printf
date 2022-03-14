#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int number = 12;

	_printf("%b\n", 98);
	_printf("%S\n", "Best\nSchool");
	_printf("%+15d chichos\n", number);
	printf("%+15d chichos\n", number);
	printf(" %-10d \n", number);
	printf(" %010d \n", number);
	printf(" %-#10x \n", number);
	printf(" %#x \n", number);
	_printf("%R\n", "Best\nSchool");

	return (0);
}
