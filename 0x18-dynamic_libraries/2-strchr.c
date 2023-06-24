#include "main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int iqe;

	for (iqe = 0; s[iqe] >= '\0'  ; iqe++)
	{
		if (s[iqe] == c)
		{
			return (s + iqe);
		}
	}

	return ('\0');
}
