#include <stdio.h>

int main(){

    for (int i = 1 ; i < 5 ; i++) {
        printf ("Printing an i, count = %d\n" , i);
    }
    for (int i = 1 ; i < 5 ; i++) {
        printf ("\nPrinting an i, count = %d\n\n" , i);
        break;
    }
    return 0;
}