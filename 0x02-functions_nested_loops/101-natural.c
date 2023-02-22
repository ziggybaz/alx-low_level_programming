#include <stdio.h>
/**
 * main - program entry point
 *
 *Description: returns subsequent functions
 *
 *Return: 0 = success
 */
void sum_multiples(void);

int main(void)
{
	sum_multiples();
	putchar('\n');
	return (0);
}

/**
 * sum_multiples - calculate odd or even
 *
 * Description: calculate sum of natural numbers divisible by 3 or 5 below 1024
 *
 * Return: void
 */
void sum_multiples(void)
{
	int n, s;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			s += n;
	}

	printf("%d", s);
}
