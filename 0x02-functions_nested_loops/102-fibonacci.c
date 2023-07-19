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
	unsigned long long first = 1;
	unsigned long long second = 2;
	unsigned long long next;
	int j;

	printf("%llu, %llu, ", first, second);
	for (j = 3; j <= i; j++)
	{
		next = first + second;
		printf("%llu", next);
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
