#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - fuction that frees memory allocated for a struct dog
 * @d: pointer to dog to free
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
