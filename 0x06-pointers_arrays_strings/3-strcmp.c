#include"main.h"
/**
*_strcmp - main function.
*
*@s1: placeholder variable
*@s2:placeholder variable
*
*
*Return: if successfull returns either the negative,
*positive or 0 in the first unmatched number
**/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
	s1++;
	s2++;
}
return (*s1 - *s2);
}
