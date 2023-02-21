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
	char myString[9] = "_putchar";
	int c;

	for (c = 0; c < 9; ++c)
		_putchar(myString[c]);

	return (0);
}
