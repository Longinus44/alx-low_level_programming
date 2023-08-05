#include "main.h"
/**
 * _strncat - concatenates 2 strings
 * @dest: first strings
 * @src: second string
 * @n: byte amount
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = src[j];
	return (dest);
}
