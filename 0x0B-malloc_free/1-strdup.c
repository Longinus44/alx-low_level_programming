#include "main.h"
#include "string.h"
/**
 * _strdup -  function that returns a pointer to a newly
 *  allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the pointer
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = strdup(str);

	if (duplicate == NULL)
		return (NULL);

	return (duplicate);
}
