#include <stdio.h>
/**
 * main - Entry point
 * prints first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long int b = 1000000000;
	unsigned long int bef1, bef2, aft1, aft2;

	printf("%lu", first);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", second);
		second += first;
		first  = second - first;
	}

	bef1 = (first / b);
	bef2 = (first % b);
	aft1 = (second / b);
	aft2 = (second % b);

	for (i = 92; i < 99; i++)
	{
		printf(", %lu", aft1 + (aft2 / b));
		printf("%lu", aft2 % b);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
