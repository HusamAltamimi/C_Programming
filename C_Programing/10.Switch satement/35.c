#include <stdio.h>

int main(){
    
    char operator;
    printf("Choos an operator[ + - * / ]: ");
    scanf("%c", &operator);

    double a;
    printf("Enter First Number: ");
    scanf("%lf", &a);

    double b;
    printf("Enter Second Number: ");
    scanf("%lf", &b);
    
    switch (operator)
    {
        case '+':
            printf("%lf", a+b);
            break;
        case '-':
            printf("%lf", a-b);
            break;
        case '/':
            printf("%lf", a/b);
            break;
        case '*':
            printf("%lf", a*b);
            break;
        default:
            printf("Please choos correctly!");
            break;
    }
}