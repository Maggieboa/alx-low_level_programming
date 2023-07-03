#include"main.h"
/**
 *_memset - main function to write the contant variable
 *@s:pointer to variable placeholder
 *@b:actual variable
 *@n:unsigned integer
 *
 *Return: return variable in the pointer *s if successfull
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int length;

	length = 0;
	while (length <= n)
	{
		*(s + length) = b;
		length++;
	}
return (s);
}
