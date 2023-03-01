/**
 * _strlen - returns the length of the string
 * @s: string to return
 */
int _strlen(char *s)
{
	int count;

	count =0;

	while (s[count] != '\0') count++;

	return count;
}
