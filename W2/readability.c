#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{

    int letters = 0;
    int words = 1;
    int sentences = 0;

    string text = get_string("Text: ");

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]) != 0)
        {
            letters++;
        }

        else if (text[i] == ' ')
        {
            words++;
        }

        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    float l, s;

    l = (letters * 100) / (float)words;
    s = (sentences * 100) / (float)words;

    float grade =  0.0588 * l - 0.296 * s - 15.8;

    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }

    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }

    else
    {
        printf("Grade %d\n", (int) round(grade));
    }



}