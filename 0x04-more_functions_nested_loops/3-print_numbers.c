#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int ch;

	ch = 0;
	for (ch = 0; ch < 10; ch++)
		_putchar(ch + '0');
	_putchar('\n');
}
