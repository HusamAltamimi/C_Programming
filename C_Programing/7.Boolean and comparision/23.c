#include <stdio.h>
#include <stdbool.h>

int main() {

    bool value = 12 > 9;
    printf("%d", value);
    value = 12 < 9;
    printf(" %d", value);
    value = 9 == 9;
    printf(" %d", value);
    value = 12 != 9;
    printf(" %d", value);
    value = 12.25 <= 9.78;
    printf(" %d", value);

    int a = 9;
    value = a <= 9;
    printf(" %d", value);

    return 0;
}