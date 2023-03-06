#include <stddef.h>
#include <stdbool.h>
/**
 * _strpbrk - Length of initial segment matching
 * @s: string to be scanned
 * @accept: string containing the list of characters to match in s
 *
 * Return: returns the number of characters in the initial segment of s
 */

char *_strpbrk(char *s, char *accept)
{

	int i, x;


	for (i = 0; (s[i] != '\0'); i++)
	{
		for (x = 0; s[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				return (s + i);
				break;
			}
		}
	}
	return (s + i);
}
