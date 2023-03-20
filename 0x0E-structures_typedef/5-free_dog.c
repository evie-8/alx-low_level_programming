#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - freeing dynamic memory
 * @d: pointer to structure
 */
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
