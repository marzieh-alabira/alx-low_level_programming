#include "main.h"
#include <string.h>

/**
 * rev_string- a function that reverses a string
 * @s: the placeholder to the function
 * Return: none
 */
void rev_string(char *s)
{
	int i;
	int j;
	char temp;
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	j = len - 1;
	for (i = 0; i <= (len - 1) / 2; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
