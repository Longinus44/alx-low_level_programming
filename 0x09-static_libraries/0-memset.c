#include "main.h"
/**
 * _memset - fills memory with specific values
 * @s: the starting point of memory
 * @b: the values
 * @n: amount of bytes to be changed
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
