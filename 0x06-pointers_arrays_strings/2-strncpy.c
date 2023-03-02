#include "stringlength.c"
/**
 * _strncpy - copies a string
 *
 * @n: The number of characters to be copied from source
 * @src: This is the string to be copied.
 * @dest: This is pointer to the destination array ehere the content
 * is to be copied
 *
 * Return: This function returns the pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
