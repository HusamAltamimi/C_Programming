#include <stdio.h>

int main(){

    char operator = '+';
    int a = 8, b = 7;

    int reslut = (operator == '+') ? (a + b) : (a - b);
    printf("%d", reslut);
    return 0;
}