#include <stdio.h>

int main(){

    int x = 5;
    int y = 5 + 2 * 9 / 3 - 3;

    printf("%d", x++);
    printf("\n%d", x);
    printf("\n%d", ++x);
    printf("\n%d",y);

    return 0;
}