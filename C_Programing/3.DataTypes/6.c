#include <stdio.h>

int main() {
    float myFloat = 1234567.123456789;
    printf("Value of myFloat: %f\n", myFloat);

    double myDouble = 1234567.123456789;
    printf("Value of myDouble: %lf\n", myDouble);

    double myDouble2 = 1234567.123456789;
    printf("Value of myDouble2: %0.2lf\n", myDouble2);

    double myDouble3 = 5.5e9;
    printf("Value of myDouble3 = %lf", myDouble3);

    return 0;
}
