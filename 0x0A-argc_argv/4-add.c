#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int i, num, sum;

    if (argc < 2)
    {
        printf("0\n");
        return 0;
    }

    sum = 0;
    for (i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return 1;
            }
        }
        num = atoi(argv[i]);
        sum += num;
    }
    printf("%d\n", sum);

return 0;
}
