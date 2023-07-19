#include "main.h"
/**
 * print_last_digit - this prints the last digit of a number 'i'
 * @i:number to print the last digit
 *
 * Return: Always 0 (Success)
 *
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
	{
		_putchar(-j + 48);
		return (-j);
	}
	else
	{
		_putchar(j + 48);
		return (j);
	}
}
