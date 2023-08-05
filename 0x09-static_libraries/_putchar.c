#include <unistd.h>
/**
 * _putchar - return the character c to std output
 * @c: the return character
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
