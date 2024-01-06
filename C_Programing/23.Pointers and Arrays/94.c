/*Character array and pointers*/

#include <stdio.h>
#include <string.h>

int main(){
    char C[4];

    C[0] = 'J';
    C[1] = 'H';
    C[2] = 'O';
    C[3] = 'N';
    printf("%s\n", C);

    C[20];
    C[4] = '\0';            // NULL character
    printf("%s\n", C);

    int len = strlen(C);    // Even we have 20 character length string
    printf("%d\n", len);
}