#include <stdio.h>

int main(){

    char a ='5';
    int b = 9;
    double c = 5.69;

    int result = a + b;
    printf("%d",result); // The compiler is converting the character value to the ASCII value 

    result = c + b;
    printf("\n%d",result); // The compiler is converting b to Double, then storing the result as Integer
    return 0;
}