#include "main.h"
#include<stdlib.h>
/**
 *_calloc-function to return pointer
 *@nmemb:elements
 *@size: size of an array
 *
 *Return: pointer
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *length;
unsigned int index;
char *content;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}
length = malloc(nmemb * size);
if (length == NULL)
{
	return (NULL);
}
content = length;
for (index = 0; index < (nmemb * size); index++)
{
	content[index] = '\0';
}

return (length);
}