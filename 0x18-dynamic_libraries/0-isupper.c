#include "main.h"
/**
 * _isupper - prints if a cheracter is a suppercase
 * @c: character to check
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
