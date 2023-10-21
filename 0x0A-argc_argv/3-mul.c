#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * This program multiplies two integers passed as command-line arguments and
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: 0 if the program completes successfully, otherwise 1
 */

int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;

	printf("%d\n", mul);

	return (0);
}
