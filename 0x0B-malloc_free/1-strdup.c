#include "main.h"
#include <stdlib.h>
/**
 *_strdup-function to return  a pointer with copy of a string
 *@str:placeholder varaible for the string to be copied
 *Return: the pointer or NULL if empty
 **/
char *_strdup(char *str)
{
char *str1 = "";
int length, i;

if (str == NULL)
{
	return (NULL);
}
for (length = 0; str[length]; length++)
{
	;
}
str1 = malloc((sizeof(char) * length) + 1);
if (str1 == NULL)
{
	return (NULL);
}
for (i = 0; i < length; i++)
{
	str1[i] = str[i];
}
str1[i] = '\0';
return (str1);
}
