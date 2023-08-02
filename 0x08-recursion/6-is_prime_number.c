#include"main.h"

int is_not_prime(int num, int div);
int is_prime_number(int n);

/**
 * is_not_prime - function to confirm whether a number is divisible.
 * @num: placeholder variable
 * @div: Tplaceholder variable
 *
 * Return:  0 if true else 1
 **/
int is_not_prime(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_not_prime(num, div + 1));
}

/**
 * is_prime_number - a function to check whether a number is a prime.
 * @n: placeholder variable
 *
 * Return: If true 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_not_prime(n, div));
}
