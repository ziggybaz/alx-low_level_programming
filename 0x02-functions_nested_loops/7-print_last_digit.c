#include "main.h"
/**
 * print_last_digit - print final number
 *
 * Description: print the last digit
 *
 * @x: integer type checker
 *
 * Return: x = final digit
 */
int print_last_digit(int x)
{
	if (x < 0)
		x = x * -1;
	_putchar(x + '0');
	return (x);
}
