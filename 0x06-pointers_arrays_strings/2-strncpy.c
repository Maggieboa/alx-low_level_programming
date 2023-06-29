#include"main.h"
/**
*_strncpy-this is a function copies a string
*and works the same as the strncpy
**@dest:its a variable placeholder
*@src:variable placeholder of type char
*@n:variable placeholder of type int
*Return:returns dest value on success
*
**/
char *_strncpy(char *dest, char *src, int n)
{
int length;
int src_length;

length = 0;
src_length = 0;
while (src[length++])
{
	src_length++;
}
for (length = 0; src[length] && length < n; length++)
{
	dest[length] = src[length];
}
for (length = src_length; length < n; length++)
{
	dest[length] = '\0';
}
	return (dest);
}
