#include <stdio.h>
/**
* main - to write a program that prints alphabets in lower case followed by upper case
* Return: 0
*/
int main(void)
{
	char n, m;
	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	m = 'A';
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
