#include <stdio.h>
#include "stringlength.c"
/**
 * _strncat - concatenates(combines) two strings
 *
 * @n: The number of characters to be copied from source.
 * @src: This is the string to be copied.
 * @dest: This is pointer to the destination array where the is to be copied.
 *
 * Return: This function returns a pointer to the copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{	
	int indx1;

	int indx2;
	
	index1 = 0;
	for (indx2 = _strlen(dest); (indx1 < n && indx1 < _strlen(src));)
	{
		dest[indx2] = src[indx1++];
		indx2++;
	}
	return (dest);
}
