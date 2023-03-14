#include <stdlib.h>
#include "1-strdup.c"
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
	if (s2 == NULL)
		s2 = "";
	len = _strlen(s1);
	len2 = _strlen(s2);
	arr = (char *)_strdup(s1);
	arr = realloc(arr, len2 * sizeof(char) + 1);
	if (arr == NULL)
                return (NULL);	
	for (i = len, x = 0; x < len2; i++, x++)
		*(arr + i) = s2[x];
	return (arr);
}
