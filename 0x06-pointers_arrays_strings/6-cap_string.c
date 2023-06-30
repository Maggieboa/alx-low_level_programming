#include"main.h"
/**
*cap_string - begining of the function where we will replace the first letter
*of all words to become capital
*@s:placeholder variable for our words
*
*Return:returns s which is each word starting with a capital letter
*
*
**/
char *cap_string(char *s)
{
int length;

length = 0;
if (s[0] >= 97 && s[0] <= 122)
{
       	s[0] -= 32;
}
for (length = 0; s[length] != '\0'; length++)
{
	if (s[length - 1] == 32)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] -= 32;
		}
	}
}
return (s);
}
