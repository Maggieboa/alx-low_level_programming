#include"main.h"
#include<stdlib.h>
/**
 *string_nconcat-function to coincatinate two strings
 *
 *@s1:placeholder variable for string pointer
 *@s2:placeholder variable for string pointer
 *@n:size of the array
 * Return:to return pointer of the concatinated string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int length;
unsigned int index = n;

if (s1 == NULL)
{
	return (NULL);
}
if (s2 == NULL)
{
	return (NULL);
}

while (s1[index])
{
	length++;
}

concat = malloc(sizeof(char) * (length + 1));

if (concat == NULL)
{
	return (NULL);
}
length = 0;
for (index = 0; s1[index]; index++)
{
	concat[length++] = s1[index];
}
for (index = 0; s2[index] && index < n; index++)
{
	concat[length++] = s2[index];
}
concat[length] = '\0';

return (concat);
}
