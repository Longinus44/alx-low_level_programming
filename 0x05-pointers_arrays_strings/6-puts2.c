#include "main.h"
/**
 * puts2 - prints every other character of a string,
 *  starting with the first character
 *  @str: the string to print
 *  Return: 0
 */
void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length += 2;
	}
	_putchar('\n');
}
