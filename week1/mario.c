# include <stdio.h>
# include <cs50.h>

int main(void)

{

int height;

        do
            {

            printf("Please Enter Height: ");

            height = get_int("Enter Height: "); /*Prompt user to enter in a valid height*/

            }
            // Restrict input to the numbers 1 through 8

        while (height < 1 || height >8 ); // Use || to add additional condition similar to && in r language

    for (int i=0; i< height; i++)

        {

        for (int j=height-i; j>1; j--)

            {