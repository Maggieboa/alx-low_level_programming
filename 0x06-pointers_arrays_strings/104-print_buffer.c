#include"main.h"
#include<stdio.h>
/**
*print_buffer - main function
*@b:plcaholder variable
*@size:placeholder variable
*
*Return: void therefore its empty
*
**/
void print_buffer(char *b, int size)
{
	int x, length;

	for (x = 0; x < size; x += 10)
	{
		printf("%08x: ", x);

		for (length = 0; length < 10; length++)
		{
			if ((length + x) >= size)
				printf("  ");

			else
				printf("%02x", *(b + length + x));

			if ((length % 2) != 0 && length != 0)
				printf(" ");
		}

		for (length = 0; length < 10; length++)
		{
			if ((length + x) >= size)
				break;

			else if (*(b + length + x) >= 31 &&
				 *(b + length + x) <= 126)
				printf("%c", *(b + length + x));

			else
				printf(".");
		}

		if (x >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
