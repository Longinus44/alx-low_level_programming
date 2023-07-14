#include <stdio.h>
/**
 * main - Entry point
 *
 * this prints small and capital alphabets together
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';
	char capital = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		if (letter == 'z')
		{
			while (capital <= 'Z')
			{
				putchar(capital);
				capital++;
			}
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
