/*pointers and arrays*/

#include <stdio.h>

int main(){

    int a[5] = {5, 6, 2};
    int *p = a;
    int *q = &a[0];

    /*
    Address => a+i = &a[i]
    Value   => *(a+i) = a[i]
    Call array variable  = call first array_element address*/
    
    printf("%p", &a[0]);
    printf("\n%p", a);
    printf("\n%p", p);
    printf("\n%p\n\n", q); 

    for(int i = 0; i < 5; i++){
        printf("%p\n", a+i);
        printf("%p\n", &a[i]);
        printf("%d\n", *(a+i));
        printf("%d\n", a[i]);
        }
    
    return 0;
}