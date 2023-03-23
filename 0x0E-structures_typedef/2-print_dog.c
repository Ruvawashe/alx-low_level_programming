#include "dog.h"
#include <stdio.h>

/**
 *print_dog - a function that prints a struct dog
 *if element of d is NULL - print (nil)
 *if name is NULL - print Name: (nil)
 *@d: struct to initialize
 *Return: Nothing
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";

printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
