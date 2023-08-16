#ifndef DOG_H
#define DOG_H
/**
 * dog - defines a struct for dog
 * @name:first member
 * @age:second memeber
 * @owner:third member
 *
 * Return: 0
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
