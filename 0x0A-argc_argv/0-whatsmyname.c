#include "main.h"
#include <stdio.h>
/**
 * main - outputs name of the program
 * @argc: arguments amount
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
