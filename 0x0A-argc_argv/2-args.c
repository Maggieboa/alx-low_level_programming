#include<stdio.h>
/**
 *main - function to print all the arguments in cmd line
 *@argc: variable for the number of cmds on the cmd line
 *@argv: variable for the array
 *
 *Return: 0 for success
 **/
int main(int argc, char *argv[])
{
int len;
for (len = 0; len < argc; len++)
{
	printf("%s\n", argv[len]);
}
return (0);
}
