#include"main.h"
/**
*leet-function that convert the characters into leet numerals
*
*@s: variable placeholder for our array
*
*
*Return:the actual value of s
*
**/
char *leet(char *s)
{
int length;
int length2;
char x[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

length = 0;
while (s[length])
{

	for (length2 = 0; length2 <= 7; length2++)
	{
		if (s[length] == x[length2] || s[length] - 32 == x[length2])
		{
			s[length] = length2 + '0';
		}
	}
length++;
}
return (s);
}
