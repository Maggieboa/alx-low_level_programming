#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
*main-main function of the program
*@argc:placeholder variable for the number of arguments
*@argv:placeholder varaible for the arguments
*Return: 0 if success and 1 if not successful
*/
int main(int argc, char *argv[])
{
int sum, i, z;

sum = 0;

for (i = 1; i < argc; i++)
{
	for (z = 0; argv[i][z] != '\0'; z++)
	{
		if (!isdigit(argv[i][z]))
		{
			printf("Error\n");
			return (1);
		}
	}
sum += atoi(argv[i]);
}
printf("%d\n", sum);

return (0);
}
