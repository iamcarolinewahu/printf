#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
