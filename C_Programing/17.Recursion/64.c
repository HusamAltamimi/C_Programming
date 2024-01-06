#include<stdio.h>

int factorial(int num);

int main(){

    int a , b;
    printf("Enter Number: ");
    scanf("%d",&a);
    b = factorial(a);
    printf("Factorial: %d",b);
    return 0;
}

int factorial(int num){
    
    if (num > 0){
        return num * factorial (num - 1);
    }
    else{
        return 1;
    }
}