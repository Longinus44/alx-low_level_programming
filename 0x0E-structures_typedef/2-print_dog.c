#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: member
 *
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else if (d->name == NULL)
		d->name = "(nil)";
	else if (d->owner == NULL)
		d->owner = "(nil)";
	else
	{
		printf(" Name: %s\n Age:%f\n Owner: %s\n", d->name, d->age, d->owner);
	}
}
