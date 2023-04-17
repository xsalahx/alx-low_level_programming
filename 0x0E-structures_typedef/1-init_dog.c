#include "dog.h"
#define NULL (void *)0

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL || age < 0 || owner == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
