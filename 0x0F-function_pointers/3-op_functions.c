#include "function_pointers.h"
#include <stdio.h>
/**
*op_add-function or add operation
*@a:placeholder variable for 1st number
*@b:placeholder variable for the 2wnd number
*Return: 0 for success and 1 if not successful
**/
int op_add(int a, int b)
{
int z;

z = a + b;
return (z);
}
/**
*op_sub-function for subtraction
*@a:placeholder variable for 1st number
*@b:placeholder variable for the 2wnd number
*Return: 0 for success and 1 if not successful
**/
int op_sub(int a, int b)
{
int x;

x = a - b;
return (x);
}
/**
*op_div-function for division operation
*@a:placeholder variable for 1st number
*@b:placeholder variable for the 2wnd number
*Return: 0 for success and 1 if not successful
**/
int op_div(int a, int b)
{
int y;

y = a / b;
return (y);
}
/**
*op_mod-function for modulus operation
*@a:placeholder variable for 1st number
*@b:placeholder variable for the 2wnd number
*Return: 0 for success and 1 if not successful
**/
int op_mod(int a, int b)
{
int r;

r = a % b;
return (r);
}
/**
*op_mul-function for multiplication operation
*@a:placeholder variable for 1st number
*@b:placeholder variable for the 2wnd number
*Return: 0 for success and 1 if not successful
**/
int op_mul(int a, int b)
{
int s;

s = a * b;
return (s);
}
