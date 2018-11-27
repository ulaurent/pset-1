#include <stdio.h>
#include <cs50.h>

int main(void)
{

    // A while loop to only accept user inputs betwwen 0 and 23
    // if not, continue prompting the user until correct input
    int height = -1;
    while (height < 0 || height > 23)
    {
        height = get_int("Height: ");

    }


    // constructed forloop to iterate through, starting at 1 and as long as the int
    // is less then the user inputs height
    for (int i = 1; i <= height; i++)
    {

        // another constructed forloop to genearte spaces, spaces beginning at height-1 , and always
        // has to be greater than or equal to the i value
        for (int j = 0; j <= height; j++)
        {
            if ((height - i) <= j)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        //Print a new line before
        printf("\n");

    }
}
