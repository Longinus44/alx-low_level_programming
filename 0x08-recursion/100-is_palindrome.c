#include "main.h"

int check(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - function that returns
 * 1 if a string is a palindrome and 0 if not
 * @s: input
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _sqrt_recursion(s)));
}

int wildcmp(char *s1, char *s2)
{
	return (0);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 *
 * Return:0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _sqrt_recursion(s + 1));
}

/**
 * check - checks the characters for palindrome
 * @s: the string to check
 * @i:iterator
 * @len:the length
 *
 * Return: 0
 */
int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
}
