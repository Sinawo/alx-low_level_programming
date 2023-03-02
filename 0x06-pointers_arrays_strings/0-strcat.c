#include <stdio.h>
#include "stringlength.c"
/**
 * _strcat - concatenates(combines) two strings
 *
 * @src: This is the string to be appended. This should not overlap the
 * destination.
 * @dest: This is pointer to the destination array, which should contain
 * a C string, and should be large enough to contain the concatenated
 * resulting string.
 *
 * Return: This function returns a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int indx1 = 0;

	int indx2;

	for (indx2 = _strlen(dest); indx1 < _strlen(src);)
	{
		dest[indx2++] = src[indx1++];
	}
	dest[indx2] = '\0';

	return (dest);
}
