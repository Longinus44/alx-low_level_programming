#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: maximum src bytes
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
