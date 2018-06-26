#include <stdio.h>
#include <cs50.h>

int main(void){

// Variables for the height the user inputs
// Blocks and spaces variables to build the pyramid

int height=-1;
int blocks;
int spaces;

// A while loop to only accept user inputs betwwen 0 and 23
// if not, continue prompting the user until correct input
while(height < 0 || height > 23){
    height = get_int("Height: ");
}

printf("your height is, %i\n",height);

// constructed forloop to iterate through, starting at 1 and as long as the int
// is less then the user inputs height
for (int i = 1; i < height; i++){
    // another constructed forloop to genearte spaces, spaces beginning at height-1 , and always
    // has to be greater than or equal to the i value
    for (spaces = height-1; spaces >= i; spaces--){
        printf(" ");
    }
     //constructed for loop to generate the amount of x's needed per line;
    // blocks starts at zero and increases as long as its less than or equal to i
    for (blocks = 0; blocks <= i; blocks ++){
        printf("x");
    }
// new line command to begin new line before the first forloop adds ++1 to i
printf("\n");
}

}
