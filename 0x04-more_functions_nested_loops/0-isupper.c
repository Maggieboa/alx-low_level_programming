#include"main.h"
/**
 *_isupper - uppercase letters
 *
 *@c:  local variable
 * Return: 0 for successful or 1 when not successful
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
