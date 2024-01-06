#include <stdio.h>

int main(){

    int counter = 1;
    while (counter <= 3 ) {
        printf("counter of one \n");
        counter +=1;
    }

    counter = 1;
    while (counter++ <= 3) {
        printf("counter of two \n");
    }

    counter = 1;
    while (++counter <= 3) {
        printf("counter of three \n");
    }
    return 0;
}