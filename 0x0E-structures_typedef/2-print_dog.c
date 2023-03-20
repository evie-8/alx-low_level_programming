#include <stdio.h>
#include "dog.h"
/**
 * print_dog - show members
 * @d: object of dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", (*d).owner);
	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);
	 printf("Age: %f\n", (*d).age);
}
