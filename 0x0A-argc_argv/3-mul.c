#include <stdio.h>
#include <stdlib.h>
/**
 *main-function to calculate multiplication of numbers
 *@argc: placeholder for # ofargs on cmd
 *@argv: placeholder to the args
 *Return: 0 if successful,1 for error
 **/
int main(int argc, char *argv[])
{
int mul = 1, i;
for (i = 0 ; i < argc; i++)
{
	;
}
	if (i >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	if (i <= 2)
	{
		printf("Error\n");
		return (1);
	}
return (0);
}
