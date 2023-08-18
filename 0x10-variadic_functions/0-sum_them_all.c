#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: parametres to sum
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j = 0;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
			j += va_arg(ap, int);
		va_end(ap);
		return (j);
	}
}
