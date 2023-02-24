#include "main.h"

/**
* print_line - tested function
*@n: amount of lines
* Return: 0
*/
void print_line(int n)
{
int loop;
if (n > 0)
{
	for (loop = 1 ; loop <= n ; loop++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
else
{
	_putchar('\n');
}
}
