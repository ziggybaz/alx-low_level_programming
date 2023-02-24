#include "main.h"
/*
 * _isdigit - checks for a digit
 *
 * @c: typechecker
 *
 * Description: checks for a digit through 0 to 9
 *
 * Return: 1 if c is digit
 */
int _isdigit(int c)
{
	if ( c >= 48 && c <= 57 )
		return (1);
	else
		return (0);
}
