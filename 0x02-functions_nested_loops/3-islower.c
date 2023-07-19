#include "main.h"
/**
 * _islower - indicates if c is a lowercase character
 * Return: 0 or 1 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
