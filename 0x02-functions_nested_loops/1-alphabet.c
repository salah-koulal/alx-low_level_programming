#include "main.h"

/**
 * Void print alphabets
 * prints the alphabets in lowercase, followed by a new line
 * Return : 0 (Success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
