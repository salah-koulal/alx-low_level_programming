#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and in uppercase
 * followed by a new line
 * return: 0 always
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
