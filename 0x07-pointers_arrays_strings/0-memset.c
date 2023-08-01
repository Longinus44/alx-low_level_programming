#include "main.h"
/**
 * *_memset - function that fills memory with constant byte
 * @s: memory area
 * @b:constant byte
 * @n: bytes of the memory area pointed to by
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
