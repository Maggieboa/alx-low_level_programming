#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array-function to print an array
 *@size:placeholder for size
 *@c:placeholder for string
 *Return: null if its empty
 **/
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;

if (!size)
{
	return (NULL);
}
p = malloc(sizeof(char) * size);
if (!p)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	p[i] = c;
}
return (p);
}
