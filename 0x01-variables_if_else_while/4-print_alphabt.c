#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - writ a program that print alphabet in lower case in new line
* Return: 0
*/
int main(void)
{
	char c;
	c = 'a';
	while (c <= 'z')
{
	if ((c != 'q' && c != 'e') && (c <= 'z'))
	putchar(c);
	c++;
}
	putchar('\n');
	return (0);
}
