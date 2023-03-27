#include "main.h"

/**
 *  _strlen- a program that returns the length of a string
 * @s: a parameter for the function to work
 * Return: returns lenght
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
