#include"main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *_strdup-function to return an array
 *
 *@str:placeholder for the variable
 *
 *Return: retuns the array or NULL if empty
 **/
char *_strdup(char *str)
{
unsigned int length, i;
char *ptr;

if (!str)

	return (NULL);

for (length = 0; str[length] != '\0'; length++)

	;

ptr = (char *)malloc(sizeof(char) * (length + 1));
if (!ptr)

	return (NULL);

for (i = 0; i <= length; i++)
{
	ptr[i] = str[i];
	ptr[length] = '\0';
}
	return (ptr);
}
