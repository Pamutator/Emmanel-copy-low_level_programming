#include "main.h"

/**
 * _isalpha - function to check if c is a letter, lowercase
 *
 * @c: is the int that will ise for the argument of the function
 * Description: using the _isalpha function
 * this program prints "
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
