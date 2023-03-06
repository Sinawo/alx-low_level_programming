#include <stddef.h>
#include <stdbool.h>
/**
 * _strchr - locates a character in a string
 * @s: string passed
 * @c: character to locate in the string s
 *
 * Return: a pointer(array or string) to the first occurrence
 * of the character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ((s[i] == c) ? s + i : NULL);
}
