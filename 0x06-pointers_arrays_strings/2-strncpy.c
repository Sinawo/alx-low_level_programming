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
	int indx1;

	if (n <= _strlen(src))
	{
		for (indx1 = 0; (indx1 < n && src[indx1] != '\0'); indx1++ )
		{
			dest[indx1] = src[indx1];
		}
	}
	else if (n > _strlen(src))
	{
		while (indx1 < n)
			dest[indx1++] = '\0';
	}

	return (dest);
}
