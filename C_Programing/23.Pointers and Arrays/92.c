/*Arrays as function arguments*/

#include <stdio.h>

int sumOfElements(int *A, int size){            // We have to pass the size of array because it's impossible to calculate in the user defined function         
    int sum = 0;      
    for(int i = 0; i < size; i++){
        sum += A[i];                 // For some reason it\s the same as *(A+i)
    }
    return sum;
}
int main(){
    int A[] = {1, 2, 3, 4,5};
    int size = sizeof(A) / sizeof(A[0]);
    int total = sumOfElements(A, size);         // A can be used for &A[0], we only pass pointer to integer
    
    printf("Total = %d\n", total);
    return 0;
}
