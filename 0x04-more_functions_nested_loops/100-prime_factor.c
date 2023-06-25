#include <stdio.h>
#include <math.h>

/**
  * main - Prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0  for Success
  */
int main(void)
{
	long x, m;
	long number = 612852475143;
	double s = sqrt(number);

	for (x = 1; x <= s; x++)
	{
		if (number % x == 0)
		{
			m = number / x;
		}
	}

	printf("%ld\n", m);

	return (0);
}
