#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 *
 *
 *@d: structure
 *
 *
 *Return: void
 */
void print_dog(struct dog *d)
{
if (d == 0)
return;
if (d->name == NULL)
{
printf("name: (nil)\n");
}
else
{
printf("name: %s\n", d->name);
}
printf("age: %f\n", d->age);
if (d->owner == NULL)
{
printf("owner: (nil)\n");
}
else
{
printf("owner: %s\n", d->owner);
}
}
