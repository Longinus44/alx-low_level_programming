#include "main.h"
/**
 * _strcpy - function that copies the pointed string
 * @dest: among test
 * @src: among the test toot
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\n')
	{
		l++;
	}
	for ( ; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

