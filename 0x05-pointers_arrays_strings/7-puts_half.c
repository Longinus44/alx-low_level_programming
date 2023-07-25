#include "main.h"
/**
 * puts_half - print half of a string
 * @str: the string
 * Return: 0
 */
void puts_half(char *str)
{
	int length, a, n;

	length = 0;
	for (a = 0; str[a] != '\0'; a++)
	{
		length++;
	}
	n = length / 2;
	if ((length % 2) == 1)
	{
		n = ((length + 1) / 2);
	}
	for (a = n; str[a] != '\0'; a++)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
