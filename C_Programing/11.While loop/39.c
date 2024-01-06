#include <stdio.h>
/*
do loop will be executed at least one even if the conditoin is wrong
*/
int main (){

    int count = 5;
    do {
        printf("%d\n", count);
        count++;
    } while (count < 5);
    return 0;
}