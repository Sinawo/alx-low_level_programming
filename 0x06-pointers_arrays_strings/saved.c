#include "stringlength.c"
#include <stdbool.h>

/**
 * cap_string -  capitalizes all words of a string
 *
 * @str: This is the string to capitalize.
 *
 * Return: This function returns the capitalize string
 */
char *cap_string(char *str)
{
	int i;
	bool separator = false;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (separator)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				separator = true;
				break;
			default:
				separator = false;
				break;

		}
	}
	return (str);
}
