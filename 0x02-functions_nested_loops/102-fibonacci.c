#include <stdio.h>
/**
 * main -Entry point
 * function that prints 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i = 50;
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long next;
	int j;

	printf("%lu, %lu, ", first, second);
	for (j = 3; j <= i; j++)
	{
		next = first + second;
		printf("%lu", next);
		if (j < i)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		first = second;
		second = next;
	}
	return (0);
}
