#include "main.h"
/**
 * reverse_array - function that reverses the content of an array
 * @a: content of the array
 * @n: number of elements in the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int temp, i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
