#include <unistd.h>
/**
 * _putchar - outputs the characters c to stdout
 * @c:the output
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
