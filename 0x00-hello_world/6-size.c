#include <stdio.h>

/**
 *main - returns size of types.
 *
 *Description: function prints size of types on stdo
 *
 * Return: 0 = success
 */

int main(void)
{

	printf("Size of a char: %lu byte\(s)n", (unsigned long)sizeof(char));
	printf("Size of a char: %lu byte\(s)n", (unsigned long)sizeof(int));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(float));

	return (0);
}
