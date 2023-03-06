/**
 * _memcpy.c - copies a block of memory from location to another
 *
 * @dest: This is pointer to the destionation array (address) where the content
 * is to be copied.
 * @src: This a pointer to the source of data to be copied.
 * n: This the number of bytes to be copied.
 *
 * Return: return a pointer to destionation
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = src[i];
	return (dest);

}
