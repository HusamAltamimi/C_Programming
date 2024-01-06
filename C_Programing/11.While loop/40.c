#include <stdio.h>

int main(){

    int num , count = 10;
    printf("Enter Number: ");
    scanf("%d",&num);

    do {
        printf("%d * %d = %d \n", num , count , num * count);
        count--;
    } while (count >= 1);

    return 0;
}