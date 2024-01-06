/*
Explicit data type conversion
*/

#include <stdio.h>

int main() {

    double a = 5.67;
    int b = 9;

    double result = (int)a + b;
    printf("%lf", result);
    printf("\n%d", (int)result); 
    return 0;
}