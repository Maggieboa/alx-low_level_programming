#include<unistd.h>
/**
 *_printf-function to print to the console
 *@c:placeholder variable for character to be printed
 *Return: return the series of character to be printed in the console
 *
 **/
char _putchar(char c)
{
	return (write(1, &c, 1));
}
