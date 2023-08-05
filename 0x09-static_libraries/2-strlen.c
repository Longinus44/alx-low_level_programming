#include "main.h"
/**
 * _strlen - return string length
 * @s: the string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
