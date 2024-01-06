#include <stdio.h>

int main() {
    /*
    int     | %d for printing
    double  | %lf for printing
    float   | %f for printing
    char    | %c for printing
    */
   
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of long long int: %lu bytes\n", sizeof(long long int));
    printf("Size of double is: %lu bytes\n", sizeof(double));
    printf("Size of float is: %lu bytes\n", sizeof(float));

    return 0;
}
