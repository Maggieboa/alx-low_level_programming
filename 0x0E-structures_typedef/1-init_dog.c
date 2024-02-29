#include "dog.h"
#include <stdlib.h>
/**
 *init_dog-function to print a statement
 *@d:placeholder for  the struct
 *@name:placheloder for name
 *@age:placeholder for age
 *@owner:placeholder for age
 *Return: void
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
}
