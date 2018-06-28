#include <stdio.h>
#include <cs50.h>

int main(void){

long checksum = 0;
long cardNumber = -1;
long constant = 10;
//long cardMax = 80;

while (cardNumber <= 0 || cardNumber >= 9999999999999999) {

cardNumber = get_long_long("Enter your card number: ");

}

//printf("Your card number is: %ld\n", cardNumber);

while (constant <= cardNumber){

long lastDigit = ((cardNumber/constant) % (10))*2;
//printf("THE: %ld\n", lastDigit);
if(lastDigit >= 10){
    checksum += (lastDigit % 10);
    checksum += ((lastDigit/10)%10);
    }
    else{
        checksum+= lastDigit;
    }

constant *= 100;

}

constant = 1;

printf("checksum: %ld\n", checksum);

while(constant <= cardNumber){

    long lastDigit2 = ((cardNumber/constant) % 10);
    //printf("here %ld\n", lastDigit2);
    checksum += lastDigit2;
    //printf("the sum so far: %ld\n", checksum);

    constant *= 100;
}

long sumLastDigit = (checksum % 10);
printf("the last digit of the sum: %ld\n", sumLastDigit);


if (sumLastDigit == 0){
    printf("Card Accespted\n");
}
else if(sumLastDigit  > 0){
    printf("Card Denied\n");
}

}

