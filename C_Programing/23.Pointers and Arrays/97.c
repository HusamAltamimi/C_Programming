/*character array and pointers*/

#include <stdio.h>

void print1(char *C);
void print2(char *C);
void print3(char *C);

int main(){

    char C[20] = "Hello";               //Null terminator is implicit
    print1(C); printf("\n");
    print2(C); printf("\n");
    print3(C);

    return 0;
}

void print1(char *C){
    int i;
    while (C[i] != '\0')           //Because we don't know the array size, we only have the base address
    {
        printf("%c", C[i++]);
    }
}
void print2(char *C){               //Advanced pointer print without i
    while (*C != '\0')            
    {
        printf("%c", *C);
        C++;
    }
}
/*Higher level, In the expression *C++, the post-increment (++) operator has a higher precedence than the 
dereference (*) operator. Therefore, the value of *C is first used in the expression, and then the pointer 
C is incremented by 1.*/
void print3(char *C){               
    while (*C != '\0')            
    {
        printf("%c", *C++);     // try (*C)++ !
    }
}