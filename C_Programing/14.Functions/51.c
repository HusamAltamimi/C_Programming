#include <stdio.h>

void calculateSquare(int num) {
    int square = num * num;
    printf("Square = %d", square);
}
int main(){

    printf("Enter Number: ");
    int num;
    scanf("%d",&num);
    calculateSquare(num);
    return 0;
}
