#include"main.h"
/**
 *_strchr - main function
 *
 *@s:placeholder variable
 *@c:placeholder variable for the char
 *
 *
 *Return: 0 for success
 **/
char *_strchr(char *s, char c)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
		if (s[length] == c)
		{
			return (s + length);
		}
	}
return ('\0');

}
