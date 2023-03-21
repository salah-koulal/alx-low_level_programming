#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: character to be checked
 * Return: 1 if it is lowercase and 0 if not
 */

int _islower(int c)
{
	if(c >= 'a' && c<= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
