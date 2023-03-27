#include "main.h"
#include <string.h>

/**
 * print_rev- a function that prints string in reverse line
 * @s: is the parameter
 * Return: none
 */

void print_rev(char *s)
{
	int i;
	int j;

	j = strlen(s);
	{
		for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	}
	_putchar('\n');
}
