#include <stddef.h>
#include <stdbool.h>
/**
 * _strspn - Length of initial segment matching
 * @s: string to be scanned
 * @accept: string containing the list of characters to match in s
 *
 * Return: returns the number of characters in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{

	int i, x;
	unsigned int count = 0;

	for (i = 0, x = 0; (s[i] != '\0') && (s[x] != '\0'); i++)
	{
		for (; s[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
