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
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list i_str;
	char *str;
	unsigned int index;

	va_start(i_str, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(i_str, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(i_str);
}
