#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = -1;

    //Ask user for a height between 0 and 23
    while (height < 0 || height > 23)
    {
        height = get_int("Height: ");
    }

    //for loop will print each row
    for (int i = 1; i <= height; i++)
    {
        //Determine span of pyramid
        int span = (height * 2) + 2;

        //for loop to print chracters at each index of the row
        for (int j = 0; j < span; j++)
        {
            //First half pyramid boundaries
            if ((height - i) <= j && j < height)
            {
                printf("#");
            }
            //Second half of pyramid boundaries
            else if (j > height + 1 && j <= height + 1 + i)
            {
                printf("#");
            }
            //Set the spaces between the pyramids
            else if (j <= height + 1)
            {
                printf(" ");
            }
        }
        //Next row on a new line before loop continues
        printf("\n");
    }

}




