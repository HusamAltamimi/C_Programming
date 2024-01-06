#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    // Using the ternary operator to find the maximum of two numbers
    int max = (x > y) ? x : y;
    printf("The maximum of %d and %d is %d", x, y, max);

    int age = 18;
    (age >= 18) ? printf("\nyou are eligible to vote") : printf("\nyou are NOT eligible to vote");

    return 0;
}
