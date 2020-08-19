# include <stdio.h>
# include <cs50.h>
# include <math.h> //round function comes from here

int main(void)

{

int cents; //initialize the cents owed

    do

    {

        float dollars = get_float("Change owed: "); // dollar owed should be a float

        cents = round(dollars * 100); // apply the round fuction and compute the change amount owed and round to nearest penny

    }

    //Concept: if user enters .43, then it becomes 43. Divide by 25 to get 1
    // divide by 25 and count reminder which would be 18 then divide by 10 to get 1
    //divide by 25, count reminder which is 18, divide by 5, count reminder which is 3...

    while (cents <= 0);

    int quarters = cents / 25; //take the biggest bite first

    int dimes = (cents % 25) / 10; //take the reminder of dividing by the biggest bite and divide by the second biggest bite

    int nickels = ((cents % 25) % 10) / 5; //take the reminder of dividing by the biggest bite and remainder by the second biggest bite and divide by third biggest bite

    int pennies = ((cents % 25) % 10) % 5; //Repeat the above process and add the sum of coins below

    printf("%d\n", quarters + dimes + nickels + pennies); // sum the coins left

}