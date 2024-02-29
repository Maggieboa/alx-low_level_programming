#include "main.h"
#include <stdlib.h>
/**
 *str_concat-function to concatinate strings
 *@s1:place holder for the first string
 *@s2:placeholder for the second string
 *Return: the concatinated string
 **/
char *str_concat(char *s1, char *s2)
{
unsigned int length = 0, i = 0, len2 = 0, len;
char *s3;
if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
while (s1[length])
{
	length++;
}
while (s2[i])
{
	i++;
}
s3 = malloc((sizeof(char) * (length + i)) + 1);
if (s3 == NULL)
{
	return (NULL);
}
len = i + length;
i = 0;
while (len2 < len)
{
	if (len2 <= length)
	{
		s3[len2] = s1[len2];
	}
	if (len2 >= length)
	{
		s3[len2] = s2[i];
		i++;
	}
	len2++;
}
s3[len2] = '\0';
return (s3);
}
