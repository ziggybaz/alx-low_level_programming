#include "main.h"
/**
 * _islower - check for lowercase
 *
 * Description: checks for lowercase characters
 *
 * Return: 1 if 'c' is lowercase else 0 if its not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
