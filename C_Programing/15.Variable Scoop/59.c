#include <stdio.h>

int result;

void addNumbers(int num1, int num2){
    result = num1 + num2;
    printf("Result = %d", result);
}

int main(){
    addNumbers(5,6);
    return 0;
}