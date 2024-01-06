#include <stdio.h>

int main(){

    int a = 5;

    int *x = &a;
    int **y = &x;
    int ***z = &y;
    ***z = 15;

    printf("%d\n", &a);
    printf("%d\n", *x);
    printf("%d", *y); printf(" %d\n", x);
    printf("%d\n", **y);
    printf("%d\n", &x);
    printf("%d", **z); printf(" %d", *z); printf(" %d\n", y);
    printf("%d\n", ***z);
}