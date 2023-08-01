#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: bytes to copy
 *
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	 int i;
	 int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
