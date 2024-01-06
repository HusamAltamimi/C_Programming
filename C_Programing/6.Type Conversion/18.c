/* 
Data Type Hierarchy: when performing math operation, the conversion is related to the higer in Hierarchy
*/
#include <stdio.h>
int main(){
    printf("Size of Long Double : %lu bytes",sizeof(long double));
    printf("\nSize of Long Long : %lu bytes",sizeof(long long));
    printf("\nSize of Double : %lu bytes",sizeof(double));
    printf("\nSize of float : %lu bytes",sizeof(float));
    printf("\nSize of Long : %lu bytes",sizeof(long));
    printf("\nSize of int : %lu bytes",sizeof(int));
    printf("\nSize of short : %lu bytes",sizeof(short));
    printf("\nSize of char : %lu bytes",sizeof(char));
}