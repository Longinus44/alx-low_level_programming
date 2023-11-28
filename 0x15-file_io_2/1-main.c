#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @ac:parametres
 * @av:parametre
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int num;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	num = create_file(av[1], av[2]);
	printf("-> %i)\n", num);
	return (0);
}
