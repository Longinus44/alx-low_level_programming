#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @n:number of strings passed to the function
 * @separator:the string to be printed between the strings
 *
 * Return:0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *st;
	unsigned int i;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		st = va_arg(string, char *);
		if (st == NULL)
			printf("nil");
		printf("%s", st);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
