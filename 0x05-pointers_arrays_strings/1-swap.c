#include "main.h"

/**
* swap_int - tested function
*
*@a: first var
*
*@b: second var
*
* Return: 0
*/
void swap_int(int *a, int *b)
{
	int art;

	art = *a;
	*a = *b;
	*b = art;
}
