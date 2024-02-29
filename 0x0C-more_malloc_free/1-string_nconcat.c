#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *string_nconcat- function to concat a string
 *@s1: placeholder of the 1st char
 *@s2: placeholder of the 2nd char
 *@n: length of the array
 *Return: the concat string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int length, length1, len, x;
char *s3;

if (s1 == NULL)
{
	length = 0;
}
else
{
	for (length = 0; s1[length]; ++length)
	{
		;
	}
}
if (s2 == NULL)
{
	length1 = 0;
}
else
{
	for (length1 = 0; s2[length1]; ++length1)
	{
		;
	}
}
if (length1 > n)
{
	length1 = n;
}
x = length + length1;
s3 = malloc(sizeof(char) * (x + 1));
if (s3 == NULL)
{
	return (NULL);
}
for (len = 0; len < length; len++)
{
	s3[len] = s1[len];
}
for (len = 0; len < length1; len++)
{
	s3[len + length] = s2[len];
	s3[x] = '\0';
}
return (s3);
}
