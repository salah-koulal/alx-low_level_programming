#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int iqe, jqe;
	char *p;

	iqe = 0;
	while (s[iqe] != '\0')
	{
		jqe = 0;
		while (accept[jqe] != '\0')
		{
			if (accept[jqe] == s[iqe])
			{
				p = &s[iqe];
				return (p);
			}
			jqe++;
		}
		iqe++;
	}

	return (0);
}
