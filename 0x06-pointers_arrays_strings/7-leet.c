#include "main.h"

/**
 * leet - function that encode a string
 * @str: string that will be encoded
 * Returns: returns encoded string
 */

char *leet(char *str)
{
	int a;
	int b;

	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char numbers[] = "43071";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; lower[b] != '\0' && upper[b] != '\0'; b++)
		{

			if (str[a] == lower[b] || str[a] == upper[b])
			{
				str[a] = numbers[b];
				break;
			}
		}
	}
	return (str);
}
