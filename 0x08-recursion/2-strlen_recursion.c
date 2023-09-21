#include"main.h"
/**
*_strlen_recursion-function to count length of characters
*@s:placeholder for caharcters
*Return: 0 for success and -1 for error
**/
int _strlen_recursion(char *s)
{
if (!*s)
{
	return (0);
}
return (_strlen_recursion(s + 1) + 1);
}
