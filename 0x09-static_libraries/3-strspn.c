#include "main.h"
/**
 * _strspn - Entry point
 * @s:input 1
 * @accept: input 2
 *
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i;

	n = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{

				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
