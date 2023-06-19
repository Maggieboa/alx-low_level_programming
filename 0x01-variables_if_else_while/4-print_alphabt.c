#include <stdio.h>
/**
 *main - start of our program
 *
 *
 *
 *
 *Return: returns results after for loop statements
 */
int main(void)
{

	char alph;
	
	for (alph = 'a'; alph <= 'z'; alph++)
	{
	  	
	if (alph != 'e' || alph != 'q')
	{
		putchar(alph);
	}
	}	
	putchar('\n');
	return (0);
}
