#include"main.h"
/**
*times_table - starting point of our program
*
*
*Return: its void so it should be empty
**/
void times_table(void)
{
	int x, y, z, j, m;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;

			if (z > 9)
			{
				j = z % 10;
				m = (z - j) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(m + '0');
				_putchar(j + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(z + '0');
			}
		}

		_putchar('\n');
	}
}
