#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c:the alphabet to check
 *
 * Return: 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
