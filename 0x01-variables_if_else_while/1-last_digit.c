#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of program
 *
 * This assigns a random value to n and prints it
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;

	if (l_digit == 0)
	{
		printf("Last digit of %d is %i and is 0\n", n, l_digit);
	}
	else if (l_digit <= 5)
	{
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, l_digit);
	}
	else
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, l_digit);
	}
	return (0);
}
