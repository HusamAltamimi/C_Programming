#include <stdio.h>

int main(){
    int a = 2 , b = 9;
    double result;

    result = b / a; // The division is intger wise, the storing in Double
    printf("%lf", result); 

    result = b / (double)a; // Explicit conversion then storing in Double
    printf("\n%.1lf", result);

    printf("\n%d", (int)('8'+ 12)); // Hierarchy + Explicit Conversion
}