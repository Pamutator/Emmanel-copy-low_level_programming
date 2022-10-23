#include <stdio.h>
/**
* main - to write a program that prints alphabets in lowercase and upper case
* Return: 0
*/
int main(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
