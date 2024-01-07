/*character array and pointers*/

#include <stdio.h>

void print(char *C){            
    while (*C != '\0')            
    {
        printf("%c", *C);
        C++;
    }
}

int main(){
    //char C[20]= "Hello"; string get stored in the space of array
    char *C= "Hello";      //string get stored as complie time constant  
    //C[0] = 'A';       //Error! Crash!
    print(C); 
    printf("\n");

    return 0;
}
