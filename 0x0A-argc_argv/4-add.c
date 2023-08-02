#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 *main - its a function that add numbers in an array
 *@argc: placeholder varaible for args in cmd line
 *@argv:placeholder variable for an array of args number in cmd line
 *
 *
 *Return: returns 0 or 1
 **/
int main(int argc, char *argv[])
{
int a;
int b;
int sum;

for (a = 1; a < argc; a++)
{
	for (b = 0; argv[a][b]; b++)
	{
		if (argv[a][b] < '0' || argv[a][b] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	sum += atoi(argv[a]);
}

	printf("%d\n", sum);

	return (0);
}

