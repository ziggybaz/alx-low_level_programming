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
	int i = 0;

	do {
		_putchar(i + 0);
		i++;
	} while (i >= 0 && i <= 9);
	_putchar('\n');
}
