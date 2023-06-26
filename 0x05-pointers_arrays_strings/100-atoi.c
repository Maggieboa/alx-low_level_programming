#include"main.h"
/**
*_atoi - beginning of our program
*@s:variable
*
*Return: 0 for success
**/

int _atoi(char *s)
{
	int x;
	unsigned int y;
	char *j;

	j = s;
	y = 0;
	x = 1;
	while (*j != '\0' && (*j < '0' || *j > '9'))
	{
		if (*j == '-')
			x *= -1;
		j++;
	}
	if (*j != '\0')
	{
		do {
			y = y * 10 + (*j - '0');
			j++;
		} while (*j >= '0' && *j <= '9');
	}
	return (y * x);
}
