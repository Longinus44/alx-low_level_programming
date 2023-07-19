#include <stdio.h>
/**
 * main - Entry point
 * function that prints the sum of even fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long int next, j;

	j = 0;

	for (i = 1; i <= 33; i++)
	{
		if (first < 4000000 && (first % 2) == 0)
		{
			j = j + first;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("%lu\n", j);
	return (0);
}
