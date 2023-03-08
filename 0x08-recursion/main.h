#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * 
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * print_alphabet - function to print alphabet
 *
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */
void print_alphabet_x10(void);
/**
 * _islower - prints if c is lower case
 * @c: character to use
 * Return: 1 or 0
 */
int _islower(int c);
/**
 * _isalpha - prints if character is alphabet
 * @c: character to use
 * Return: 1 or 0
 */
int _isalpha(int c);
/**
 * print_sign - prints a sign based on n
 * @n: integer to input
 * Return: 1 or 0  or -1
 */
int print_sign(int n);
/**
 * _abs - gives absolute value
 * @int: integer
 * Return: integer or abs value of int
 */
int _abs(int);
/**
 * print_last_last - prints digit last
 *
 * @int: integer to input
 * Return: last digit of integer
 */
int print_last_digit(int);
/**
 * jack_bauer - jack bauer gooo
 *
 */
void jack_bauer(void);
/**
 * times_table - times this up
 *
 *
 */
void times_table(void);
/**
 * add - adds stuff up
 *
 * @int: integers to add
 * Return: returns a sum
 */
int add(int, int);
/**
 * print_to_98 - prints to 98
 * @n: integer to start at
 *
 */
void print_to_98(int n);
/**
 * print_times_table - whatever man
 *@n: integer to put in this table
 *
 */
void print_times_table(int n);
/**
 * _isupper - determines uppercase or not
 * @c: character to determine
 * Return: true or false
 */

/*************************************************0x04. C - More functions, more nested loops************************************************/

int _isupper(int c);
/**
 * _isdigit - checks if it is digit
 * @c: character to check
 *
 * Return: returns boolean
 */
int _isdigit(int c);
/**
 * mul - multiplies stuff
 * @a: integer to multiply
 * @b: integer to multiply
 * Return: gives result
 */
int mul(int a, int b);
/**
 * print_numbers - prints the numbers
 *
 */
void print_numbers(void);
/**
 * print_most_numbers - prints the numbers
 *
 */
void print_most_numbers(void);

/**
 * more_numbers - prints the numbers
 *
 */
void more_numbers(void);
/**
 * print_line - prints a line
 *
 * @n: integer to print stuff
 */
void print_line(int n);
/**
 * print_diagonal - prints diagonal
 *
 * @n: integer to see how many stupid lines
 */
void print_diagonal(int n);
/**
 * print_square - prints a square
 *
 * @size: prints the size of whatever
 */
void print_square(int size);
/**
 * print_triangle - prints triangle
 * @size: size of triangle
 */
void print_triangle(int size);
/**
 * print_number - prints number
 *
 * @n: integer to print to char
 */
void print_number(int n);

/*================================================Project 0x05 Pointers a. C - Pointers, arrays and strings==================================================== */

/**
 * reset_to_98 - takes a parameter and updateto 98
 * @n: ponter to integer
 */

void reset_to_98(int *n);

/**
 * swap_int - swap integers
 * @a: 1st integer variable
 * @b: 2nd interger variable
 *
 */
void swap_int(int *a, int *b);


/**
 * _strlen - returns the length of the string
 * @s: string to return
 */
int _strlen(char *s);


/**
 * _puts - prins string followed by newline
 * @str: string var to return
 */

void _puts(char *str);

/**
 * print_rev - print the string in reversr
 * @s: string to reverse
 */

void print_rev(char *s);

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);
 
/**
 * ======================================0x06-pointers_arrays_strings============
 */

/**
 * _strncat - concatenates(combines) two strings
 * @n: uses at most n bytes from @src
 * @src: does not need to be null-terminated if it contains n or more bytes
 * @dest: Return a pointer to the resulting string
 * Return: a pinter to the resulting string
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strcat - concatenates(combines) two strings
 * @src: does not need to be null-terminated if it contains n or more bytes
 * @dest: Return a pointer to the resulting string
 * Return: a pinter to the resulting string
 */
char *_strcat(char *dest, char *src);


char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);


char *string_toupper(char *);

char *cap_string(char *);

char *leet(char *s);

char *rot13(char *str);

void print_number(int n);

/**
 * ==========================================0x07-pointers_arrays_strings==============
 */
char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);
/**
 * ====================================================
0x08. C - Recursion================================*/

void _puts_recursion(char *s);

void _print_rev_recursion(char *s);
#endif
