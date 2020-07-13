#ifndef _DOG_H_
#define _DOG_H_

#include <stdlib.h>

/**
 *struct dog - structure with some basic data about a dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *
 *Description: The idea is collect some basic data about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
