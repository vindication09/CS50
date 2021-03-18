#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    //If the user enters a number less than 9 (the minimum allowed population size),
    //the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9.
    int start;
        do
        {
        start = get_int("Start Size: ");
        }
        while (start < 9);

    // TODO: Prompt for end size
    //If the user enters a number less than the starting population size,
    //the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size.
    int end;
        do
        {
        end= get_int("End Size: ");
        }
        while (end<start);

    // TODO: Calculate number of years until we reach threshold
    //Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.

    int years=0;

    while(start<end)
    {
    start=start+(start/3)-(start/4);
    years++;
    }

    // TODO: Print number of years
    //Finally, your program should print the number of years required for the llama population to reach that end size,
    //as by printing to the terminal Years: n, where n is the number of years.
    printf("Years: %i\n", years);
}