#include "main.h"
/**
 * rev_string - function that reverse a string
 * @s: the string to be reverse
 * Return: 0
 */
void rev_string(char *s)
{
	int rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
