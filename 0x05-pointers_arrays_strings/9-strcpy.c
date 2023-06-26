#include"main.h"
/**
**_strcpy - start of program
*@dest: variable
*@src: variable
*Return: 0 for success
**/
char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
