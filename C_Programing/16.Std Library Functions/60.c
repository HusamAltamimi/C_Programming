#include <stdio.h>
#include<math.h>

int main(){

    printf("\nSquare root of 64 is %0.0lf\n", sqrt(64));
    printf("Cubic root of 64 is %0.0lf\n", cbrt(64));
    printf("Square root of 729 is %0.0lf\n", sqrt(729));
    printf("Cubic root of 729 is %0.0lf", cbrt(729));
    int a = 2, b = 3;
    printf("\n%d ^ %d = %.0lf",a,b,pow(a,b));
    return 0;
}
