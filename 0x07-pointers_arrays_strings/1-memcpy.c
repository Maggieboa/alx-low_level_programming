#include"main.h"
/**
 *_memcpy-starting point of our program
 *
 *
 *@dest:placeholder variable
 *@src:placeholder variable
 *
 *Return: return dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int length;

	for (length = 0; length < n; length++)
		*(dest + length) = *(src + length);

return (dest);
}
