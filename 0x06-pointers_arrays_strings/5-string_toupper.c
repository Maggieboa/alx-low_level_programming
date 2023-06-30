#include"main.h"
/**
*string_toupper-function to convert the small cases to upper cases
*
*@s: placeholder variable for our alphabets
*
*
*Return:0 for sucess
*
**/
char *string_toupper(char *s)
{
int length;

length = 0;
while (s[length])
{
	if (s[length] >= 'a' && s[length] <= 'z')
	{
		s[length] -= 32;
	}
length++;
}
return (s);
}
