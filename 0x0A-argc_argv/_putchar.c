#include "main.h"
#include <stdio.h>
/**
 * _putchar - prints output to stdout
 * @c:output
 *
 * Return: 0;
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
