#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the name of file it was compiled from, followed by a new line
 * Return: returns 0 always
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
