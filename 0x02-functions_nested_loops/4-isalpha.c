#include "main.h"
/**
* _isalpha - checks for alphabetic character
* @c: value to be checked
* Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 'a') || (c >= 'A'))
		return (1);
	else
		return (0);
}
