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
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		printf(" ");
	}
	name = (*d).name;
	age = (*d).age;
	owner = (*d).owner;
	if (name == NULL)
	{
		printf("(nil)");
	}
	if (name)
	{
		printf("Name:%s \n", name);
	}
	if (age < 0)
	{
		printf("(nil)");
	}
	if (age >= 0)
	{
		printf("Age:%f \n", age);
	}
	if (owner == NULL)
	{
		printf("(nil)");
	}
	if (owner)
	{
		printf("Owner:%s\n", owner);
	}
}
