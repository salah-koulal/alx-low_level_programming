#include "main.h"

/**
 * print_chessboard - prints chessboard.
 *
 * @a: rows.
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int itr, jqe;

	for (itr = 0; itr < 8; itr++)
	{
		for (jqe = 0; jqe < 8; jqe++)
		{
			_putchar(a[itr][jqe]);
		}
		_putchar('\n');
	}
}
