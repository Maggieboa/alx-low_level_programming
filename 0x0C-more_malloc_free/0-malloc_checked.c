#include "main.h"
#include <stdlib.h>
#include<stdio.h>
/**
 *malloc_checked-function to print pointer ref
 *@b:placeholde variable for type
 *
 *Return: void
 *
 **/
void *malloc_checked(unsigned int b)
{
void *mall;

mall = malloc(b);

if (!mall)
{
	exit(98);
}
return (mall);
}
