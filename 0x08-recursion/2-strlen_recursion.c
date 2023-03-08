#include "main.h"
/**
 * _strlen_recursion - counts the string length
 * @s: string to count it's length
 * Return: length of string s
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
		return count;
	count++;
	return count + _strlen_recursion(s + 1);
}
