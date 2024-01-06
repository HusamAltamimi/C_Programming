#include <stdio.h>

int main() {

    int a = 5; printf("\naddress a = %p", &a);
    int b = 9; printf("\naddress b = %p", &b);
    int* ptr; printf("\naddress of ptr = %p", &ptr);

    ptr = &a; printf("\nNew address stored in ptr = %p , value *ptr = %d, a = %d", ptr , *ptr , a);
    *ptr = b; printf("\naddress inside ptr = %p , value *ptr = %d, b = %d, a = %d", ptr , *ptr , b , a);
    *ptr = 31;
    ptr = &b; printf("\naddress inside ptr = %p , value *ptr = %d, b = %d, a = %d\n\n", ptr , *ptr , b , a);


}
