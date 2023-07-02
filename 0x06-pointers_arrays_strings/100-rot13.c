#include "main.h"
#include <stdio.h>
/**
* rot13 - beginning of our program
*@s: variable placeholder
*
*Return: the value held by variasble s
**/
char *rot13(char *s)
{
int length;

length = 0;
while (s[length])
{
	while ((s[length] >= 'a' && s[length] <= 'z') ||
			(s[length] >= 'A' && s[length] <= 'Z'))
	{
		if ((s[length] > 'm' && s[length] <= 'z') ||
				(s[length] > 'M' && s[length] <= 'Z'))
		{
			s[length] -= 13;
			break;
		}
			s[length] += 13;
			break;
		}
	length++;
	}
return (s);
}
