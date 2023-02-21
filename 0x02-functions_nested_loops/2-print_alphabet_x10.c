#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10x
 *
 * Description: prints alphbet x10 in lowercase
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
