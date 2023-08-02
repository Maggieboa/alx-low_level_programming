#include<stdlib.h>
/**
 *str_concat-function to concatinate strings
 *@s1:variable placeholder
 *@s2:variable placeholder
 *
 *Return: concatinated string
 **/
char *str_concat(char *s1, char *s2)
{
char *length;
int size;
int len;
int len2;

len = 0;
len2 = 0;
if (s1 == NULL && s2 == NULL)
{
	return (NULL);
}
for (size = 0; s1[size] || s2[size]; size++)
{
	len++;
}
length = malloc(sizeof(char) * len);

if (length == 0)
{
	return (NULL);
}
for (size = 0; s1[size]; size++)
{
	length[len2++] = s1[size];
}
for (size = 0; s2[size]; size++)
{
	length[len2++] = s2[size];
}

return (length);
}
