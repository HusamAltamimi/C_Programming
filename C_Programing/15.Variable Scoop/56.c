#include <stdio.h> // result is local scope to function, cann't be used outside the function


void addNumbers(int number1, int number2){
    int result = number1 + number2;
}

int main(){

    addNumbers(8,9);
    printf("Result= %d", result);

    return 0;
}
