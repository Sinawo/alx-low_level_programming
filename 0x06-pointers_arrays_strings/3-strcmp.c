#include "stringlength.c"
/**
 * _strcmp - compares the strings
 *
 * @s1: First string
 * @s2: Second string.
 *
 * Return: This function returns -/+ number or 0 resulting from comarison.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; i < _strlen(s1); i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);

}
