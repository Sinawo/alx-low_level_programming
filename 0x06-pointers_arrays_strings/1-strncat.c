#include <stdio.h>
#include "stringlength.c"
/**
 * _strncat - concatenates(combines) two strings
 * 
 * @n: uses at most n bytes from @src
 *
 * @src: This is the string to be appended. This should not overlap the destination.
 *
 * @dest: This is pointer to the destination array, which should contain a C string,
 * and should be large enough to contain the concatenated resulting string.
 *
 * Return: This function returns a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{

	int char2ExtractIndex = 0;
	int index4dest;



	for (index4dest = _strlen(dest); char2ExtractIndex < n && char2ExtractIndex < _strlen(src); index4dest++)
	{
		dest[index4dest] = src[char2ExtractIndex++];
	}
	return dest;


}
