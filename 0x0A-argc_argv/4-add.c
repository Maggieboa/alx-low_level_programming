#include <stdio.h>
#include<stdlib.h>
/**
 *main-function to calculate sum
 *@argc:placeholder for # of args in cmd line
 *@argv: cmd line args
 *Return: 1 if error 0 if success
 **/
int main(int argc, char *argv[])
{
int i, sum = 0;
char *str = "";

<<<<<<< Updated upstream
for (i = 0; i < argc; i++)
{
	;
}
if (i <= 1)
{
	printf("0\n");
}
if (i > 1)
=======
sum = 0;
if (argc < 1)
{
	printf("0\n");
}
for (i = 1; i < argc; i++)
>>>>>>> Stashed changes
{
	for (i = 1; i < argc; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
printf("%d\n", sum);
}
return (0);
}
