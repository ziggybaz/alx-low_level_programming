#include "main.h"

/**
* more_numbers - tested function
*
* Return: 0
*/
void more_numbers(void)
{
	int num, loop;
	for (loop = 0 ; loop <= 9 ; loop++)
	{
		for (num = 0 ; num < 15 ; num++)
		{
			if (num > 9)
				_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
		}
	_putchar('\n');
	}
}
