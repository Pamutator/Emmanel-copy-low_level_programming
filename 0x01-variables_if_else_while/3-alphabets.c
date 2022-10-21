#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - to write a program that prints alphabets in lower case followed by upper case
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
	n = 'A';
	while (n <= 'Z')
{
	putchar(n);
	n++;
}
	putchar('\n');
	return (0);
}
