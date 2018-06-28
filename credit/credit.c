#include <stdio.h>
#include <cs50.h>

int main(void){
// Variables used to store sums, and constant for loop
long checksum = 0;
long cardNumber = -1;
long constant = 10;
//long cardMax = 80;

// While card number meets these parameters, continue prompting the user 
// to enter a valid number.
while (cardNumber <= 0 || cardNumber >= 9999999999999999) {

cardNumber = get_long_long("Enter your card number: ");

}


// While loop to get everyother digit from the card number starting at the second 
// digit from the end
while (constant <= cardNumber){

long lastDigit = ((cardNumber/constant) % (10))*2;
//printf("THE: %ld\n", lastDigit);
if(lastDigit >= 10){
    checksum += (lastDigit % 10);
    checksum += ((lastDigit/10)%10);
    }
    else{
        // Add the value to the check sum each time it loops
        checksum+= lastDigit;
    }

// increase by 100 each time it loops to go to skip a place
// and go to the next number
constant *= 100;

}

// Set constant back to one to get ready for the next for loop
constant = 1;



// While loop to get every other digit again, starting from the last digit 
while(constant <= cardNumber){

    long lastDigit2 = ((cardNumber/constant) % 10);
    //printf("here %ld\n", lastDigit2);
    checksum += lastDigit2;
    //printf("the sum so far: %ld\n", checksum);

    constant *= 100;
}

long sumLastDigit = (checksum % 10);

// Check to see if the card number entered is a valid number by validating the 
// last digit of the checksum is equal to zero or not
if (sumLastDigit == 0){
    printf("Card Accepted\n");
}
else if(sumLastDigit  > 0){
    printf("Card Denied\n");
}


// Now check the card type using the parameters per card (AMEX, MASTERCARD, or VISA)
if (sumLastDigit == 0){

if (cardNumber > 1000000000000 && cardNumber < 10000000000000){
printf("VISA");
}

else if (cardNumber > 100000000000000 && cardNumber < 1000000000000000){
    printf("AMEX");
}
else if (cardNumber > 1000000000000000 && cardNumber < 10000000000000000){
    long type = ((cardNumber/1000000000000000)%10);
    if (type == 5){
        printf("MASTERCARD");
    }
    else if (type == 4){
        printf("VISA");
    }
}
}

}
