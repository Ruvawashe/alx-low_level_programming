#include <stdio.h>

struct dog 
{ 
	char *name;
	float age;
	char *owner;
};

int main(void)
{
	struct dog my_dog(my_dog.name, my_dog.age, my_dog.owner);

	return (0);
}

