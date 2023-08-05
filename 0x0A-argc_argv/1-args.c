#include <stdio.h>
#include "main.h"
/**
 * main - returns the number of args
 * @argc: args
 * @argv: array of agrs
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
