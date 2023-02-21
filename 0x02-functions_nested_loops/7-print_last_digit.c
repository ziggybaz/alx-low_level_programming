#include "main.h"
/**
 * print_last_digit - print final number
 *
 * Description: print the last digit
 *
 * @x: integer type checker
 *
 * Return: ld = final digit
 */
int print_last_digit(int x)
{
	int ld;

	if (x < 0)
		ld = -1 * (x % 10);
	else
		ld = x % 10;

	_putchar(ld + '0');
	return (ld);
}
