#include <stdio.h>
/**
 *main - print string to stderr
 *
 * Description: function prints output only to stderror
 *
 * Return: 1 = error/fail
 */

int main(void)
{
	char unix[] =  "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, unix);
	return (1);
}
