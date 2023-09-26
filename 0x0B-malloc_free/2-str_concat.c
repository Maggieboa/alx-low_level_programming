#include"main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat-function to concat strings
 *@s1:placeholder for one string
 *@s2:placeholder for string
 *Return:0 for success and -1 if an error occurs
 **/
char *str_concat(char *s1, char *s2)
{
unsigned int length, i, j;
char *ptr;

i = 0;
j = 0;
if (!s1)
{
	s1 = "";
}
if (!s2)
{
	s2 = "";
}
for (length = 0; s1[length] != '\0' || s2[length]; length++)
{
	i++;
}
ptr = malloc(sizeof(char) * i);
if (!ptr)
{
	return (NULL);
}
for (i = 0; s1[i]; i++)
{
	ptr[j++] = s1[i];
}
for (i = 0; s2[i]; i++)
{
	ptr[j++] = s2[i];
}
return (ptr);
}
