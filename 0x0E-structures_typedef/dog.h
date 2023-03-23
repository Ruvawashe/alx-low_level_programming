#include <stdio.h>

struct dog 
{ 
	char *name;
	float age;
	char *owner;
};

int main(void)
{
	struct dog dog;

	dog.name = "Love";
	dog.age = "3";
	dog.owner = "Steffi";
	printf("My name is %s, and I am %1.f years old.\n, I am owned by %s\n", dog.name, dog.age, dog.owner);
	return (0);
}

