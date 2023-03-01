/**
 * _strlen - returns the length of the string
 * @s: string to return
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
		count++;

	return (count);
}
