#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int iqe, s1 = 0, s2 = 0;

	for (iqe = 0; iqe < size; iqe++)
	{
		s1 += a[iqe];
		s2 += a[size - iqe - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}i
