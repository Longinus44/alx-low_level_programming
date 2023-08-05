#include "main.h"
/**
 * _atoi - converts a string into integer(casting)
 * @s:the string to cast
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int j, i;
	unsigned int res;

	res = 0;
	j = 1;
	i = 0;

	while (!(s[i] <= '9' && (s[i] >= '0') && s[i] != '\0'))
	{
		if (s[i] == '-')
			j *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] != '\0');
		i++;
	}
	res *= j;
	return (res);
}
