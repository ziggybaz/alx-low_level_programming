#include "main.h"

/**
* print_diagonal - tested function
*@n: printed variable
* Return: 0
*/
void print_diagonal(int n)
{
int loop;
int mult;
for (loop = 0 ; loop < n ; loop++)
{
	for (mult = 0 ; mult < loop ; mult++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
if (n <= 0)
{
	_putchar('\n');
}
}
