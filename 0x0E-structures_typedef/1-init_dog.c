#include <stdlib.h>
#include "dog.h"

/**
 * declaration of struct dog in header file dog.h
 * @name - gives the name of dog
 * @age - gives age of dog
 * @owner - gives name of owner of dog
 * return 
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}	
