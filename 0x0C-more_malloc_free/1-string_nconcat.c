#include <stdlib.h>
#include "_strlen.c"
/**
 * string_nconcat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of chars to concat
 * Return:  pointer should point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int len2, len, i, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;

	arr = malloc((len) + n * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		*(arr + i) = s1[i];
	for (i = len, x = 0; x < n; i++, x++)
		*(arr + i) = s2[x];
	return (arr);
}
