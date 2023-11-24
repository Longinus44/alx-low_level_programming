#include "main.h"

/**
 * get_bit - function that returns the value
 *  of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bite;

	if (index > 63)
		return (-1);

	bite = (n >> index) & 1;

	return (bite);
}
