#include "main.h"
/**
 * _strcpy - copies string pointer
 * @dest: copied destination
 * @src: copy from here
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (*(src + 1) != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
