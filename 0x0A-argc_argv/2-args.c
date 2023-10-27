#include <stdio.h>
/**
 *main-function to print all args followed by a new line
 *@argc:number of args in a cmd line
 *@argv: cmdline args
 *Return: 0 if successful
 **/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
