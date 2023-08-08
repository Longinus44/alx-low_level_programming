#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *conat;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	conat = malloc(sizeof(char) * (i + j + 1));
	if (conat == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		conat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		conat[j] = s2[j];
		i++, j++;
	}
	conat[i] = '\0';
	return (conat);
}
