#include "main.h"
/**
* _puts - prints char to stdo
*
*@str: string
*
* Return: void
*/

void _puts(char *str)
{
	int length;

	for (length = 0 ; str[length] != '\0' ; ++length;)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
