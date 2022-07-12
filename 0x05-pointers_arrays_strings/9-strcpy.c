#include "main.h"

/**
 * _strcpy - functions copies the variable
 * @dest: This is destiny
 * @src: This is the copy
 *
 * Return: This returns the copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
