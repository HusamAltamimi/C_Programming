/*character array and pointers*/

#include <stdio.h>

void print(const char *C){          //This way we can't modify array, only read!            
    while (*C != '\0')            
    {
        printf("%c", *C);
        C++;
        // C[0] = 'A'               will not work
    }
}

int main(){

    char C[20]= "Hello";
    print(C); 
    printf("\n");

    return 0;
}
