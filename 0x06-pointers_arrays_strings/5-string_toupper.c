#include "stringlength.c"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str: string to change its elements
 *
 * Return: This function returns uppercase letters
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}
