#include "dog.h"
/**
 *new_dog - creates a new dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *
 *Return: ptr pointer to new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int len_name = 0, len_owner = 0;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	len_name = str_len(name);
	ptr->name = malloc((unsigned int)len_name * sizeof(char));
	if (ptr->name == NULL)
		return (NULL);
	str_cp(ptr->name, name);
	ptr->age = age;
	len_owner = str_len(owner);
	ptr->owner = malloc((unsigned int)len_owner * sizeof(char));
	if (ptr->owner == NULL)
		return (NULL);
	str_cp(ptr->owner, owner);

	return (ptr);
}
/**
 *str_len - finds the length of an string literal
 *@str: pointer to the string literal
 *
 *Return: i length of the string
 */
int str_len(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (++i);
}
/**
 *str_cp - copies the content of an string literal to a new allocated memory
 *@cp: pointer to the new allocated memory
 *@str: pointer to the string literal
 *
 *Return: void
 */
void str_cp(char *cp, char *str)
{
	int i = 0;

	while (str[i])
	{
		cp[i] = str[i];
		i++;
	}
	cp[i] = str[i];
}
