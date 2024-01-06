#include <stdio.h>

int main() {

    int count = 0;
    for ( int i = 1 ; i <= 100 ; i++) {
        count = count + i;
    }
    printf ("count = %d \n", count);

    count = 0; // Even Numbers count
    for ( int i = 2 ; i <= 100 ; i = i +2) {
        count = count + i;
    }
    printf ("count = %d", count);

    return 0;
}