#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - new object of type dog
 * @name: name fo dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	(*p).name = malloc(sizeof(char) * (strlen(name) + 1));
	if ((*p).name == NULL)
	{
		free(p);
		return (NULL);
	}
	(*p).owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if ((*p).owner == NULL)
	{
		free((*p).name);
		free(p);
		return (NULL);
	}
	strcpy((*p).name, name);
	strcpy((*p).owner, owner);
	(*p).age = age;
	return (p);
}
