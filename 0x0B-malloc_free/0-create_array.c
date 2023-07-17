#include <stdlib.h>
/**
 *create_array-function to creates an array of chars
 *
 *@size: placeholder variable for our array size
 *@c: placeholder variable for our array
 *Return: t or 0
 **/
char *create_array(unsigned int size, char c)
{
char *t;
unsigned int length;

t = malloc(sizeof(char) * size);

if (size == 0)
{
	return (NULL);
}
for (length = 0; length < size; length++)
{
	if (t == 0)
	{
		return (NULL);
	}
	else
	{
		t[length] = c;
	}
}
return (t);
}
