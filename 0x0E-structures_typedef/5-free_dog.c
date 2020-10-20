#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees structure
 *
 *
 *@d: structure
 *
 *
 *Return: void
 */
void free_dog(dog_t *d)
{

if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
