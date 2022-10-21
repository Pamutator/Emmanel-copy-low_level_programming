#include "main.h"

/**
* _isupper - check for uppercase letters
* @c: char to check
*
*return: 0 or 1
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
