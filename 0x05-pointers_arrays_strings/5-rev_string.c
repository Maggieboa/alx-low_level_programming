#include"main.h"
/**
*rev_string - start of program
*
*@s: variable
*Return: returns void
**/
void rev_string(char *s)
{
	int a, length;

	char *beginning, *ending = s;

	for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
	{
		ending++;
	}
	length = a + 1;
	beginning = s;
	for (a = 0; a < length / 2; a++)
	{
		char z;
		z = *ending;
		*ending = *beginning;
		*beginning = z;
		beginning++;
		ending--;
	}
	ending[length + 1] = '\0';
}
