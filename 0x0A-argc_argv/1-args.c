#include "main.h"

/**
 * main - Entry point of the program
 *
 * This program prints each command-line argument passed to it, including
 * the numbers of the program itself.
 *
 * @argc: The number of arguments passed to the program
 * 
 *
 * Return: Always 0 (success)
 */


int main(int  argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n",argc-1);

	return (0);
}