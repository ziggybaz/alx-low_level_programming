#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 *
 * Description: function that prints the n times table, starting with 0.
 *
 * @n: integer type-checker
 *
 * Return: n timestable
 */
void print_times_table(int n)
{
	int x, y, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar(48);
			for (y = 1; y <= n; ++y)
			{
				_putchar(',');
				_putchar(' ');

				x = num * y;

				if (x <= 9)
					_putchar(' ');
				if (x <= 99)
					_putchar(' ');

				if (x >= 100)
				{
					_putchar((x / 100) + 48);
					_putchar((x / 10) % 10 + 48);
				} else if (x <= 99 && x >= 10)
					_putchar((prod / 10) + 48);
				_putchar((x % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
