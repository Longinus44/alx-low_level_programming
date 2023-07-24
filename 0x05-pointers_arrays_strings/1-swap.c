#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: number to be swapped with b
 * @b: number to be swapped with a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
