#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    printf("Enter Number that represent the power: ");
    scanf("%d",&a);

    printf("Enter Number to calculate: ");
    scanf("%d",&b);

    float Result = pow(b, sqrt(a));
    printf("Result is: %f", Result);

    return 0;
}