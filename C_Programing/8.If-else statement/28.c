#include <stdio.h>

int main(){

    int age = 310;

    if (age >= 120 || age < 0){ // Good braket example
        printf("Invalid age");
    }
    else if (age >= 18){
        printf("You are eligible to vote");
    }
    else {
        printf("Sorry, you are not eligible to vote");
    }
    if (age >= 18){
        printf("\nYou are eligible to vote"); // Good example to show the effect of ELSE IF
    }
    return 0;
}
