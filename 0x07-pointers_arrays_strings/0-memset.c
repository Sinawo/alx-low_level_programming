/**
 * _memset - fills memory with a constant byte
 * @s: the pointer to be filled provided starting address
 * @b: constant byte or Value to be filled
 * @n: number of bytes to be filled starting from ptr to be filled
 * Return: a pointer to the memory araa s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = *s; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);

}
