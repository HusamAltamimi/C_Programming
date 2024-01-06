/*Character array and pointers*/
#include <stdio.h>
#include <string.h>

int main(){

    char C1[6] = "Hello";
    char *C2 = C1;                //Vallid expression, becase the name of the character array returnt the address of the first element

    //Pointers varilabes to array, take the same form of array variable when working on them!
    //Same expressions : Same results:
    printf("%d\n", C1);
    printf("%d\n", C2);     //As expected the didderence is only one byte    
    printf("%c\n", *(C1+1));    //Derefrencing using array varialbe, using it as pointer

    C2[2] = *(C2+2) = 'H';      
    printf("%s\n", C1);
    printf("%s\n", C2);        
}