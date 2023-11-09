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
if (d != NULL)
{
	name = (*d).name;
	age = (*d).age;
	owner = (*d).owner;
	if (name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (name != NULL)
	{
		printf("Name:%s \n", name);
	}
	if (age < 0)
	{
		printf("Age: (nil)\n");
	}
	else if (age >= 0)
	{
		printf("Age:%f \n", age);
	}
	if (owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else if (owner != NULL)
	{
		printf("Owner:%s\n", owner);
	}
}
else
{
	printf(" ");
}
}
