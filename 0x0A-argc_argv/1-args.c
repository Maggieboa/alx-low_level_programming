#include<stdio.h>
#include<stdlib.h>
/**
*main-the main function
*@argc:placeholder for number of arguments
*@argv:placeholder for arguments in a functions
*Return:0 for success
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
int i = 0;

if (argc != '\0')
{
	i = argc - 1;
	printf("%d\n", i);
}
return (0);
}
