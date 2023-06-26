#include"main.h"
/**
*_strlen -  begining of our program
*
*@s: variable
*
*Return: 0 for success
**/
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	return (length);
}
