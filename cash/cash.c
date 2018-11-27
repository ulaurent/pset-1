#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int count = 0;
    float change = -1;

    while (change <= 0)
    {
        // Takes the amount for the change the person is due and mulitplies it by 100
        // and rounds the number
        change = round(get_float("How much change is owed: ")*100);
    }

    printf("Customers change is: %f\n", change);

// While change is greater than 0 continue to arguments below
    while (change > 0)
    {
        // if change is greater than or equal to 25 , add 1 to count,
        // and take away 25 from change. do this until change is less than 25
        if (change >= 25)
        {
            count += 1;
            change -= 25;
        }
        // if change is greater than or equal to 10 , add 1 to count,
        // and take away 10 from change. do this until change is less than 10
        else if (change >= 10)
        {
            count += 1;
            change -= 10;
        }
        // if change is greater than or equal to 5 , add 1 to count,
        // and take away 5 from change. do this until change is less than 5
        else if (change >= 5)
        {
            count += 1;
            change -= 5;
        }

        // if change is greater than or equal to 1 , add 1 to count,
        // and take away 1 from change. do this until change is less than 1
        else if (change >= 1)
        {
            count += 1;
            change -= 1;
        }

    }

// print the count of coins
    printf("Number of coins to return to customer: %i", count);

}
