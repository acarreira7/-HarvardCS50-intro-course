#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int i, j;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (i = 1; i <= height; i++)
    {

        for (j = height; j > i; j--)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("#");
        }
       printf("\n");
    }

}