#include"main.h"
/**
**_strcat - starting point of our program
*@dest: variable
*@src: variable
*
*Return: 0 for success
**/
char *_strcat(char *dest, char *src)
{
	int length, dest_length;

	dest_length = 0;
	length = 0;
	while (dest[length++])
	{
		dest_length++;
	}
	for (length = 0; src[length]; length++)
	{
		dest[dest_length++] = src[length];
	}
	return (dest);
}
