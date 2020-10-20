#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog - create a new dog
 *
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *
 *Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

if (name == NULL || owner == NULL)
return (NULL);
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
d->name = malloc(sizeof(name) + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->owner = malloc(sizeof(owner) + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
d->name = name;
d->owner = owner;
d->age = age;
return (d);
}
