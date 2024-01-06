#include <stdio.h>

int main() {
    int x = 10, *ptr = &x;  // ptr now store the memory location of x

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void*)&x);            //   scanf("%d", &x): takes %d not %p
    printf("Value pointed to by ptr: %d\n", *ptr);
    printf("\nAddress stored in ptr: %p", ptr);printf("\nAddress stored in ptr: %d\n", ptr);

    return 0;
}
