#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * Description: checks for alphabetic character
 *
 * @c:ASCII value checked
 *
 * Return: 1 if 'c' is letter else 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
		return (1);
	return (0);
}
