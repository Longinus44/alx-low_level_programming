#include "main.h"
/**
 * *string_toupper - changes all lowercase letters
 * to a uppercase
 * @str: the string to compare
 * Return:0
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
