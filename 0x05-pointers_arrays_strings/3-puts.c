#include "main.h"
/**
* _puts - tested function
*@str: string
* Return: string
*/

void _puts(char *str)
{
	int length;
	for (length = 0 ; str[length] != '\0' ;)
	{
		++length;
		_putchar(str[length]);
	}
	_putchar('\n');
}
