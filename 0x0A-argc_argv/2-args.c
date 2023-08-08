#include <stdio.h>
#include "main.h"
/**
 * main - output all args it receive
 * @argc: amout of args
 * @argv: agrs array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
