#include "dog.h"
#include <stdio.h>
/**
*init_dog-main function
*@d:placeholder variable
*@name: placeholder variable name
*@age:plcaholder variable age
*@owner:placeholder variable owner
*Return: void
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
{
	printf("Error\n");
}
d->name = name;
d->age = age;
d->owner = owner;
}
