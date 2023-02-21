#include "main.h"

/**
 * main - Entry function
 *
 * Description: main prints _putchar
 *
 * Return: Success
 */

int main(void)
{
	char myString[] = "_putchar";
	int c;

	for (c = 0; c < 8; ++c)
		_putchar(myString[c]);
	_putchar('\n');

	return (0);
}
