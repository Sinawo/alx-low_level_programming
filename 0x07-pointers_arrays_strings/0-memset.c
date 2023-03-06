/**
 * _memset - fills memory with a constant byte
 *
 * @ptr - 'Starting address' of memory to be filled
 * @b - Constant byte or Value to be filled
 * @n - Number of bytes to be filled starting from ptr to be filled
 *
 * Return: a pointer to the memory araa s
 */
char *_memset(char *ptr, char b, unsigned int n)
{
	unsigned int i;

	for (i = *ptr; i < n; i++)
	{
		*(ptr + i) = b;
	}
	return (ptr);

}
