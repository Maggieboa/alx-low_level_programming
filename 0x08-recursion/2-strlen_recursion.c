#include"main.h"
/**
 *_strlen_recursion -  function to calculate length of a string
 *
 *
 *@s: placeholder variable for string
 *
 *
 *Return:0 if successful
 *
 **/
int _strlen_recursion(char *s)
{
int length;

length = 0;
if (*s)
{
length++;
length += _strlen_recursion(s + 1);

}
return (length);
}