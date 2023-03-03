#include "stringlength.c"
#include <stdbool.h>

/**
 * rot13 -  encodes a string using rot13.
 *
 * @str: String to encrypt.
 *
 * Return: This function returns the rot13 string
 */
char *rot13(char *str)
{
	int i, indx1;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (indx1 = 0; indx1 < _strlen(input); indx1++)
		{
			if (str[i] == input[indx1])
				str[i] = output[indx1];
		}
	}

	return (str);
}
