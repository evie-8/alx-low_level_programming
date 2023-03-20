#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new object of type dog
 * @name: name fo dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new, *p;

	p = &new;
	if (p == NULL)
		return (NULL);
	new.name = name;
	new.age = age;
	new.owner = owner;
	return (p);
}
