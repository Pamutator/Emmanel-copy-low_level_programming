#include "main.h"
#include <stdio.h>

/**
 * _isdigit - this is a function that checks for numbers are 0 - 9
 * @c: char to check
 * Return: Return if c is a number, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
