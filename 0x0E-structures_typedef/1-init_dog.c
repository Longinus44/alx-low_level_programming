#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - defines a struct for dog
 * @name:first member
 * @age:second memeber
 * @owner:third member
 * @d: general pointer
 * Description: this struct houses the user parametres
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
