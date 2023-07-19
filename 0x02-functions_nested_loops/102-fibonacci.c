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
	int first = 1;
	int second = 2;
	int next;
	int j;

	printf("%d, %d, ", first, second);
	for (j = 1; j <= i; j++)
	{
		next = first + second;
		printf("%d", next);
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
