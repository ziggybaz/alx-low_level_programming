#include "main.h"
/**
 * print_sign - prints sign of number
 *
 * Description: function that prints sign of a number
 *
 * @n: type checker
 *
 * Return: 1 if n > 0 and prints +
 * 	0 if n = 0 and prints 0
 * 	-1 if n < 0 and prints -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
