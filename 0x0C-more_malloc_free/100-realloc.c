#include"main.h"
#include<stdlib.h>
/**
 *_realloc-function to reallocate memeory block
 *@old_size: variable placeholder
 *@new_size:new varaible placeholder
 *@ptr:pointer
 *Return:pointer
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_1, *ptr_2;
	unsigned int index;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
		{
			return (NULL);
		}
		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_1 = ptr;
	mem = malloc(sizeof(*ptr_1) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_2 = mem;
	for (index = 0; index < old_size && index < new_size; index++)
		ptr_2[index] = *ptr_1++;

	free(ptr);
	return (mem);
}
