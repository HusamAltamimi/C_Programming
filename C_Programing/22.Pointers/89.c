#include <stdio.h>
/*pointers as a function*/

void increment(int *p);

int main(){

    int a = 10;
    increment(&a);
    printf("%d", a);

    return 0;
}

void increment(int *p){
    *p = *p + 1;
}
