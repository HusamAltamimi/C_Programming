#include <stdio.h>

int main(){

    int num, counter = 1;
    printf("Enter Number: ");
    scanf("%d",&num);

    while (counter <=10) {
        printf("%d * %d = %d\n", num , counter, num * counter);   
        counter++;
    }
}
