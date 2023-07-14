#include <stdio.h>
/**
 * main - Entry point
 *
 * this prints the hexadecimal digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num <= 15)
	{
		if (num < 10)
		{
			putchar('0' + num);
		}
		else
		{
			putchar('a' + (num - 10));
		}
		num++;
	}
	putchar('\n');
	return (0);
}
