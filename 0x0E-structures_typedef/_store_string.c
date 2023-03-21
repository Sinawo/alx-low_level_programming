#include <stdlib.h>
#include "_strlen.c"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return:on Fails (NULL if str = NULL)
 * on Success (a pointer to the duplicated string)
 */
char *_strdup(char *str)
{
	char *arr;
	int len, i;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	arr = malloc(len * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		*(arr + i) = str[i];
	arr[i] = '\0';
	return (arr);
}
