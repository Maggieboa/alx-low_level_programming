#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 *print_strings-startimng point of our program
 *@separator:varaiable place holder
 *@n:variable placeholder
 *@...:variadic function
 *
 *Return:list
 *
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int index;

	va_start(num, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(num, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
