#include "main.h"
#include <stdlib.h>
/**
 *_strdup-function to return  a pointer with copy of a string
 *@str:placeholder varaible for the string to be copied
 *Return: the pointer or NULL if empty
 **/
char *_strdup(char *str)
{
char *str1, *str2 = str;
int length, i;

if (str == NULL)
{
	return (NULL);
}
for (length = 0; str[length]; length++)
{
	i++;
}
str1 = malloc(sizeof(char) * i);
if (str1 == NULL)
{
	return (NULL);
}
for (i = 0; i < length; i++)
{
	str1[i++] = str2[length];
}
free(str1);
return (str2);
}
