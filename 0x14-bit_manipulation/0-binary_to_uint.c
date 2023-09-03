#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return:  the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned num;

	for (num = 0; *b; b++)
	{
		if (*b == '1')
		{
			num = (num << 1) | 1;
		}
		else if (*b == '0')
		{
			num <<= 1;
		}
		else
		{
			break;
		}
	}
	return (num);
}
