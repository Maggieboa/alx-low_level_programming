#include<stdio.h>
/**
 *main - function to print out the no or args in cmd line
 *@argc: holds the number of commands in a cmd line
 *@argv: an array of args stored in the cmdline
 *
 *Return: 0 for success
 *
 **/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
int length;

length = 0;
while (length < argc)
{
	length++;
}
	printf("%d\n", length - 1);
return (0);
}