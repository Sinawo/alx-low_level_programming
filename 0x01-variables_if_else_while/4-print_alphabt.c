#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * This main function prints alphabet in lowercase except q and e
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
                        ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
