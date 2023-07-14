#include<stdio.h>
#include<stdlib.h>
/**
 *main - function for doing multiplication
 *@argc: for the arguments in the cmd line
 *@argv: array of number of args in cmd line
 *
 *Return: 0 if successful or 1 if not successful
 **/
int main(int argc, char *argv[])
{
int a;
int b;
int c;

if (argc == 3)
{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
}
else
{
	printf("Error\n");
	return (1);
}

return (0);
}
