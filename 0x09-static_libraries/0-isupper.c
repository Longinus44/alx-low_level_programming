#include "main.h"
/**
 * _isupper - return uppercase letter
 * @c: char to check
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
