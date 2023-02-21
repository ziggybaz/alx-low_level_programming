#include "main.h"
/**
 * _abs - compute val of int
 *
 * Description: compute absolute value of an integer
 *
 * @x: integer type checker
 *
 * Return: 0 = success
 */

int _abs(int x)
{
	if (x < 0)
		x = (-1) * x;
	return (x);
}
