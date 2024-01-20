#include "main.h"
#include <string.h>
/**
 * *_strncpy - function that copies a string,
 * @dest: the destination string
 * @src: the source string
 * @n: size of string
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
