/*Arrays as function arguments*/

#include <stdio.h>

int sumOfElements(int A[]){                     //  Declairing A[] or *P is the same, it is an pointer to integer
    int sum = 0;
    int size = sizeof(A) / sizeof(A[0]);        //  Doesn't work because A is pointer to integer, not Array!
    for(int i = 0; i < size; i++){
        sum += A[i];
    }
    return sum;
}
int main(){
    int A[] = {1, 2, 3, 4,5};
    int total = sumOfElements(A); printf("Total = %d\n", total);
    return 0;
}
