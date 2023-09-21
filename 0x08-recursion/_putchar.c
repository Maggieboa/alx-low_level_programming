#include <unistd.h>
/**
*_putchar-function to return a character
*@c:placeholder variable for a character
*Return: returns the printed character
**/
int _putchar(char c)
{
return (write(1, &c, 1));
}
