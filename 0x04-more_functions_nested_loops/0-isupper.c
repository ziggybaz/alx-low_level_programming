#include "main.h"
/*
 * _isupper - checks if char is uppercased
 *
 *@c: typechecker
 *
 * Description: check for uppercase characters
 *
 * Return: 1 if is uppercased
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
