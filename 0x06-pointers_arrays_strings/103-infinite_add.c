#include"main.h"
char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
*_add_strings - function for adding two numbers.
*@n1: placeholder variable fo the number to be added.
*@n2: placeholder for second variable to be added
*@r: The buffer to store the result.
*@size_r: The buffer size.
* Return: placeholder for storing the results of the function.
**/
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int x, y = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		x = (*n1 - '0') + (*n2 - '0');
		x += y;
		*(r + r_index) = (x % 10) + '0';
		y = x / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		x = (*n1 - '0') + y;
		*(r + r_index) = (x % 10) + '0';
		y = x / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		x = (*n2 - '0') + y;
		*(r + r_index) = (x % 10) + '0';
		x = x / 10;
	}

	if (y && r_index >= 0)
	{
		*(r + r_index) = (y % 10) + '0';
		return (r + r_index);
	}

	else if (y && r_index < 0)
		return (0);

	return (r + r_index + 1);
}
/**
*_addition - function for adding two numbers.
*@n1: placeholder variable fo the number to be added.
*@n2: placeholder for second variable to be added
*@r: The buffer to store the result.
*@size_r: The buffer size.
* Return: placeholder for storing the results of the function.
**/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int length;
	int n1_length;
	int n2_length;

	n1_length = 0;
       	n2_length = 0;
	for (length = 0; *(n1 + length); length++)
		n1_length++;

	for (length = 0; *(n2 + length); length++)
		n2_length++;

	if (size_r <= n1_length + 1 || size_r <= n2_length + 1)
		return (0);

	n1 += n1_length - 1;
	n2 += n2_length - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}

