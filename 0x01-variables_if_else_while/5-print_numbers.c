#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - write a program that prints all sinle digits of base 10
* Return: 0
*/
int main(void)
{
	char n;

	n = 0;
	while (n < 10)
{
	printf("%d", n);
	n++;
}
	putchar('\n');
	return (0);
}
