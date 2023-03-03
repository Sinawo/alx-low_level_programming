#include "stringlength.c"
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

	for (i = 0; str[i] != '\0'; i++)
	{
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
				if (str[i] == str[_strlen(str) - 1])
					break;
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
				break;
			default:
				break;

		}
	}
	return (str);
}
