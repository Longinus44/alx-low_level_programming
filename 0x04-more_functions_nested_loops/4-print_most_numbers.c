#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 skipping 2 and 4
 * Return:0
 */
void print_most_numbers(void)
{
	int i;

	i = 48;

	while (i >= 48 && i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i++;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
