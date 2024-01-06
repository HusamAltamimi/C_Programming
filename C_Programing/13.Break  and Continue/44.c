#include <stdio.h>

int main(){

    int i;
    for (i = 1 ; i < 5 ; i++) {
        printf ("Printing an i, count = %d\n" , i);
    }
    printf("%d\n",i);


    for (i = 1 ; i < 5 ; i++) {
        printf ("Printing an i, count = %d\n" , i);
        if (i == 3) {
            break;
        }
    }
    printf("%d",i);
    return 0;
}