#include <unistd.h>
/**
 * _putchar - outputs the characters c to stdout
 * @c:the parameter to output
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
