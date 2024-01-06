#include <stdio.h>

int main(){
    int num;
    printf("Enter Month Number: ");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
            printf("January");
            break;
        case 2:
            printf("Feburary");
            break;
        default:
            break;
    }
}