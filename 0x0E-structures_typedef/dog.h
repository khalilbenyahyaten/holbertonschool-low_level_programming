#ifndef DOG
#define DOG
#include <stdio.h>
/**
 * struct dog - define a new structure
 *
 *@name: dog's name
 *@owner: dog's owner
 *@age: dog's age
 *
 */
struct dog
{
char *name;
char *owner;
float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
