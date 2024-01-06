#include <stdio.h> // Solution1: result is Global scope

int result;

void addNumbers(int number1, int number2){
    result = number1 + number2;
}

int main(){

    addNumbers(8,9);
    printf("Result= %d", result);

    return 0;
}
