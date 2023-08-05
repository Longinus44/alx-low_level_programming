#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: stored memory
 * @src: memory to copy from
 * @n: amount of byte
 *
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
