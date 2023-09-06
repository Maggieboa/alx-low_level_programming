#include<stdio.h>
#include<stdlib.h>
/**
*main-main function of the program
*@argc:placeholder variable for the number of arguments
*@argv:placeholder varaible for the arguments
*Return: 0 if success and 1 if not successful
*/
int main(int argc, char *argv[])
{
int x, y, z;

if (argc < 3)
{
	printf("Error\n");
	return (1);
}
x = atoi(argv[1]);
y = atoi(argv[2]);
z = x *y;
printf("%d\n", z);
return (0);
}
