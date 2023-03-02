#include <stdio.h>
#include "stringlength.c"
/**
 * _strncat - concatenates(combines) two strings
 * @n: uses at most n bytes from @src
 * @src: This is the string to be appended. This should not overlap the
 * destination.
 * @dest: This is pointer to the destination array, which should contain
 * a C string, and should be large enough to contain the concatenated
 * resulting string.
 * Return: This function returns a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{	
	int count1 = 0;

	int count2;
	
	for (count2 = _strlen(dest); count1 < n && count1 < _strlen(src); count2++)
	{
		dest[count2] = src[count1++];
	}
	return (dest);
}
