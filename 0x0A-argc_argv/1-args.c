#include <stdio.h>
/**
 *main-function to print number of args passed
 *@argc: number of args in a cmd line
 *@argv: args in a cmd line
 *Return: 0 if successful
 **/
int main(int argc, char *argv[])
{
for (argc = 0; argv[argc]; argc++)
{
	;
}
printf("%i\n", argc - 1);

return (0);
}
