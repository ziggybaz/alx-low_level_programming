#include "main.h"

/**
* print_triangle - tested function
*@size: loop
* Return: 0
*/
void print_triangle(int size)
{
int row, colm, space;
space = size;
for (row = 0 ; row < size ; row++)
{
	for (colm = size ; colm > row + 1 ; colm--)
	{
		_putchar(' ');
	}
	for (space = 0 ; space <= row ; space++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
if (size <= 0)
{
	_putchar('\n');
}
}
