#include "dog.h"
#include <stdlib.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: lenght of s
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n;
	char *o;
	struct dog *d, dog;

	int ln;
	int lo;
	int i;

	ln = _strlen_recursion(name);
	lo = _strlen_recursion(owner);

	n = (char *) malloc(sizeof(char) * (ln + 1));
	if (n == NULL)
		return (NULL);
	o = (char *) malloc(sizeof(char) * (lo + 1));
	if (o == NULL)
	{
		free(n);
		return (NULL);
	}

	for (i = 0; i <= ln; i++)
		n[i] = name[i];
	for (i = 0; i <= lo; i++)
		o[i] = owner[i];
	dog.name = n;
	dog.age = age;
	dog.owner = o;
	d = (dog_t *) malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(n);
		free(o);
		return (NULL);
	}
	*d = dog;
	return (d);
}
