#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *print_dog-function to print a series of string
 *@d: struct
 *Return: void
 **/
void print_dog(struct dog *d)
{
char *name, *owner;
float age;
if (d)
{
	name = (*d).name;
	age = (*d).age;
	owner = (*d).owner;
	if (name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", name);
		printf("Age: %f\n", age);
	}
	if (owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", owner);
	}

}
}
