#include "main.h"
/*
 *factorial: returns factorial of a number
 *
 *n - function parameter
 *
 *return - factorial
 */
int factorial(int n)
{
	if(n <= 1) 
	{
      		return 1;
	}
	return n * factorial(n - 1);
}
