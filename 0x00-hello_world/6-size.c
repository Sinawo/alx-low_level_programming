#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

 int main (void)
 {	char charSize;
	
	int intSize;
	
	long int longInt;
	
	long long longLongInt;
	
	float floatSize;

	printf("Size of a char: %d byte(s)\n", sizeof(charSize));
	printf("Size of an int: %d byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %d byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longLongInt));
	printf("Size of a float: %d byte(s)\n", sizeof(floatSize));
 	return (0);
 }
