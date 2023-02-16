#include <stdio.h>

/**
 *main - returns size of types.
 *
 *Description: function prints size of types on stdo
 *
 * Returns: 0 = success
 */

int main(void)
{
	char c;

	printf("Size of a char: %lu byte\n",(unsigned long)sizeof(c));

	return (0);
}
