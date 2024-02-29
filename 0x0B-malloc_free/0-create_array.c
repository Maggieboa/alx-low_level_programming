#include "main.h"
#include <stdlib.h>
/**
 *create_array-function to create an array of xters
 *@size:placeholder for length of the array
 *@c:placeholder for the characters
 *Return: the array of xters or 0 for error, null if
 *size is not specified
 **/
char *create_array(unsigned int size, char c)
{
char *ch;
unsigned int i;

if (size == 0)
{
	return (NULL);
}
ch = malloc(sizeof(char) * size);

if (ch == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	ch[i] = c;
}
ch[i] = '\0';

return (ch);
}
