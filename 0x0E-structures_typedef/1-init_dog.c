#include "dog.h"
/**
 *init_dog - initializes a variable of type struct dog
 *@d: pointer to the struct dog
 *@name: element of the struct dog
 *@age: element of the struct dog
 *@owner: element of the struct dog
 *
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
