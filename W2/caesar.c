#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char rotate(char c, int n);

int main(int argc, string argv[])
{

    int cipher;

    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    }

    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int rotate = atoi(argv[1]);

    string input = get_string("Plaintext: ");

    for (int j = 0, h = strlen(input); j < h; j++)
    {
        if (isupper(input[j]))
        {
            input[j] = (((input[j] - 65) + rotate) % 26) + 65;
        }

       else if (islower(input[j]))
        {
            input[j] = (((input[j] - 97) + rotate) % 26) + 97;
        }
    }

    printf("Ciphertext: %s\n", input);
    return 0;
}
