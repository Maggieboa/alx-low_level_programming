#include"main.h"
#include<stdio.h>
/**
*_strcat - function predefined in the main.h header file
*@dest: variable
*@src: variable
*Return: 0 for success and 1 if not successful
**/
char *_strncat(char *dest, char *src, int n)
{
	int length, src_length;

	length = 0;
	src_length = 0;

	while (src[length++])
	{
		src_length++;
	}
	if (src[length] && length <= n)
	{
		dest[length++] = src[src_length++];
	}
	else
	{
		src[length - 1];
		dest[length] = src[length];
	}
	return (dest);
}
