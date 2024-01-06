#include <stdio.h>

int main(){
    int x = 12;
    int result1 = x/8; // Will only show the quotient value, defined as integer!
    printf("%d", result1); 

    float y = 12;
    float result2 = y / 8; // Will only show the quotient value, defined as integer!
    printf("\n%f", result2); 

    float z = 12.0;
    float result3 = z / 8.0; // Will show the whole quotient value.
    printf("\n%0.2f", result3); 

    return 0;
}