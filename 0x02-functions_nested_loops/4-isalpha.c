#include "main.h"
/**
 * _isalpha - shows 1 if the input is a
 * letter Another cases, shows 0
 *
 * @c: The character ASCII code
 *
 * Return: 1 letter. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
