#include "main.h"
/**
* print_alphabet_x10 - print 10 times the alphabet in lower case
* Return: 0
*/
void print_alphabet_x10(void)
{
int x = 1;
	while (x < 11)
{
		char c = 'a';
	while (c <= 'z')
{
		_putchar(c);
		c++;
}
		_putchar('\n');
		x++;
}
}
