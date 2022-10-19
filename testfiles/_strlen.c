#include "main.h"

/**
 * _strlen - finds the length of the string
 *
 * @s: string to be determined
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);
}
