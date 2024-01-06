#include <stdio.h>

int main() {

    int* ptr;
    int a = 5;
    printf("\n%p", &ptr);
    printf("\n%p", ptr);
    ptr = &a;
    *ptr = 60;
    printf("\n%d", a);

    printf("\n%p", &a); printf("\n%p", ptr);
    printf("\n%d", *ptr); printf("\n%p", &ptr);

    return 0;
}