#include"main.h"
/**
*_strcat - function predefined 
*in the main.h header file
*@dest: variable
*@src: variable
*Return: 0 for success and 1 if not successful
**/
char *_strncat(char *dest, char *src, int n)
{
	int length, dest_length;
	
	length = 0;
	dest_length = 0;
	while (dest[length++])
	{
		dest_length++;
	}
	if (dest[length] && length <= n)
	{
		dest[dest_length++] = src[length++];
	}
	else
	{
		dest[dest_length + n + 1] = src[length - 1];
	}
	return (dest);
}
