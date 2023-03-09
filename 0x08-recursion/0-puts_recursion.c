#include "main.h"
/*
 *_puts_recursion: prints string followed by new line
 *
 *@*s - function argument
 *
 *returns -string with new line 
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
