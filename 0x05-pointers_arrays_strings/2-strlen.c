#include "main.h"

/**
 * int _strlen - a function that returns the length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int p = 0;

	/*increment up to the last character is NULL,\0*/ while (*(s + p) != 0)
	{
		p++;
	}
	
	return (p);
}
