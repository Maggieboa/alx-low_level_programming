#include<stdlib.h>
/**
 **_strdup-function for printing a string
 *@str: placeholder variable
 *
 *
 *Return: duplicate for the pointer of our string or NUll if empty
 **/
char *_strdup(char *str)
{
unsigned int size;
unsigned int length;
char *duplicate;

length = 0;
if (str == 0)
{
	return (NULL);
}

for (size = 0; str[size]; size++)
{
	length++;
}
duplicate = malloc(sizeof(char) * (length + 1));
if (duplicate == 0)
{
	return (NULL);
}
for (size = 0; str[size]; size++)
{
	duplicate[size] = str[size];
	duplicate[length] = '\0';
}
return (duplicate);
}
