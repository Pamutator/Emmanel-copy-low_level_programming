#include "main.h"
#include <stdio.h>

/**
* _isupper - this is a function that checks for uppercase letters
* @c: input 
* Return: 1 if c is uppercase otherwise 0
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
