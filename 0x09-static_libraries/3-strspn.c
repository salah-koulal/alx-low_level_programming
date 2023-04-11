#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int iqe, jqe;

	for (iqe = 0; s[iqe] != '\0'; iqe++)
	{
		for (jqe = 0; accept[jqe] != s[iqe]; jqe++)
		{
			if (accept[jqe] == '\0')
				return (iqe);
		}
	}
	return (iqe);
}
