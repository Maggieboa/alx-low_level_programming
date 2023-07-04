#include"main.h"
/**
 *_strspn - main function
 *
 *@s: placeholder variable
 *@accept: placeholder variable
 *
 *
 *Return:returns y if successfull
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;
	int length;

	y = 0;
	length = 0;
	while (accept[length])
	{
		x = 0;
		while (s[x] != 32)
		{
			if (accept[length] == s[x])
			{
				y++;
			}
		x++;
		}
	length++;
	}

	return (y);
}
