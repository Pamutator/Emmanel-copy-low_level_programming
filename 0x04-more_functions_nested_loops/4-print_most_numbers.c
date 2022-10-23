#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * Return: except 2 and 4, followed by a new line
 */

void print_most_numbers(void)
{
	int (i);

	for (i = 0; i < 10; i++)
	{
		if (i != 2)
		{
			if (i != 4)
			{
			_putchar(i);
			}
		}
	}
	_putchar('\n');
}
