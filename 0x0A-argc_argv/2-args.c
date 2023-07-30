/**
 * main - Entry point of the program
 *
 * This program prints each command-line argument passed to it, including
 * the name of the program itself.
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: Always 0 (success)
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
    int ar;
        for (ar = 0; ar < argc; ar++)
        {
            printf("%s \n",argv[ar]);
        }
        return 0;
}