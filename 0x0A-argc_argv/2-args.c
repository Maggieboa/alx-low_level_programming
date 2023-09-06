#include<stdio.h>
#include<stdlib.h>
/**
*main-main function of our program
*@argc:PLaceholder variable for the number of arguments
*@argv:PLaceholder variable for the arguments in a function
*Return:0 if successful or 1 if not successful
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
