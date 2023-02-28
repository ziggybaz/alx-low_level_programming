#include "main.h"
/**
* _strlen - calculating length of string
*
*@s: length
*
* Return: length of string
*/
int _strlen(char *s)
{
	int length;

	for (length = 0 ; s[length] != '\0';)
	{
		++length;
	}
	return (length);
}
