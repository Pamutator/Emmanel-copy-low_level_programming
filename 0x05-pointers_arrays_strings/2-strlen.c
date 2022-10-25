#include "main.h"

/**
 * _strlen - a function that returns the length of string
 * @s: input string
 * Return: length
 */
int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != '\0')
	{
		p++;
	}
	return (p);
}
