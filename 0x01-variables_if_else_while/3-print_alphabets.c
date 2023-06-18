#include <stdio.h>
/**
 *main - where our program starts to run from
 *
 *
 *
 *
 *Return: returns results after the for loop statement
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
	putchar(alph);
	}
	for (alph = 'A'; alph <= 'Z'; alph++)
	{
	putchar(alph);
	}
	putchar('\n');
return (0);
}
