#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(void)
{

    string text = get_string("Text: \n"); //Your program must prompt the user for a string of text (using get_string).

    int countletters = 0, countwords = 0, countsentences = 0; //Your program should count the number of letters, words, and sentences in the text.

    if (isalpha(text[0]))
        {
            countwords++;
        }

    for (int i = 0, n = strlen(text); i < n; i++)
        {
            if (isalpha(text[i]))
            {
                countletters++;
            }

            if ((isspace(text[i]) || (text[i] == '"')) && isalpha(text[i + 1]))
            {
                countwords++;
            }

            if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            {
                countsentences++;
            }

        }
    // L=average number of letters per 100 words in the text
    //S=average number of sentences per 100 words in the text.

    float L = (float)countletters / (float)countwords * 100, S = (float)countsentences / (float)countwords * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;

    printf("%f\n", index); //Your program should print as output "Grade X" where X is the grade level computed by the Coleman-Liau formula

    if (index < 1)
    {
        printf("Before Grade 1\n"); //if the index number is less than 1, your program should output "Before Grade 1".
    }

    else if (index >= 16)
    {
        printf("Grade 16+\n"); //If the resulting index number is 16 print Grade 16+
    }

    else
    {
        printf("Grade %i\n", (int) round(index));
    }

}
