#include "main.h"
/*
 * print_numbers - prints numbers
 *
 * Description: is a function that prits numbers between 1 and 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;
	i = 0;

	while ( i <= 9)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
