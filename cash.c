#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //prompt user for change do-while loop
    float n;
    do
    {
        n = get_float("Change owed: ");
    }
    while (n < 0);

    //convert float to int
    int cents = round(n * 100);
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    if (cents >= 25)
    {
        quarters = cents / 25;
    }
    else
    {
        quarters = 0;
    }
    if (cents % 25 >= 10)
    {
        dimes = cents % 25 / 10;
    }
    else
    {
        dimes = 0;
    }
    if (cents % 25 % 10 >= 5)
    {
        nickels = cents % 25 % 10 / 5;
    }
    else
    {
        nickels = 0;
    }
    if (cents % 25 % 10 % 5 >= 1)
    {
        pennies = cents % 25 % 10 % 5 / 1;
    }
    else
    {
        pennies = 0;
    }

    printf("%i\n", quarters + dimes + nickels + pennies);
}
