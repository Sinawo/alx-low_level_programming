#include <stdlib.h>
#include "_strlen.c"
/**
 * str_concat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * Return:  pointer should point to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int len2, len, i, x;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	len = _strlen(s1);
	len2 = _strlen(s2);
	arr = malloc((len + len2) * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		*(arr + i) = s1[i];
	for (i = len, x = 0; x < len2; i++, x++)
		*(arr + i) = s2[x];
	return (arr);
}
