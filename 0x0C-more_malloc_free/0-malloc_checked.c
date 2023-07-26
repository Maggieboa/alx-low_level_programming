#include"main.h"
#include<stdlib.h>
/**
 *malloc_checked-function to check size allocated
 *
 *@b:placeholder variable for size
 *
 *Return:pointer of the malloc
 **/
void *malloc_checked(unsigned int b)
{
void *str = malloc(b);

if (str == NULL)
{
	exit(98);
}
return (str);

}
