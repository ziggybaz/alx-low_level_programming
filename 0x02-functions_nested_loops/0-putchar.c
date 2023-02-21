#include "main.h"

/*
 * main - Entry function
 *
 * Description: prints -putchar
 *
 * Return: Success
 */

int main(void)
{
	char myString[9] = "_putchar";
	int i;

	for (i = 0; i < 9; ++i)
		_putchar(myString[i]);

	return(0);
}
