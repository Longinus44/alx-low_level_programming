#include "main.h"
/**
 * print_sign - function that prints the sign of 'n'
 * @n:number to be checked
 *
 * Return: 0, 1 or -1 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
