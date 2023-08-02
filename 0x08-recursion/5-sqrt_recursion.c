#include"main.h"

int f_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * f_sqrt - natural square root of a number.
 * @num: placeholder variable for a number
 * @root:placeholder variable
 *
 * Return: the square root.
 *         or -1. if no square root is possible
 */
int f_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (f_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (f_sqrt(n, root));
}
