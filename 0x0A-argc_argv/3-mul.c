#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: the values
 * @argv: values array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	i = 0;
	j = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
