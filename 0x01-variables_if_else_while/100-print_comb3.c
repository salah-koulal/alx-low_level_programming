#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = n + 1; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
