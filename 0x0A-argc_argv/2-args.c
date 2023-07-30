#include "main.h"

/*
* main - entry point
*
* This program that prints all arguments it receives.
* @argc: The number of arguments passed to the program
*@argv: An array of pointers to the command-line arguments
*
* Return : Always 0(Success)
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
        int ar;
        for (ar = 0; ar <= argc; ar++)
        {
            printf("%s\n",argv[ar]);
        }
        return 0;
}