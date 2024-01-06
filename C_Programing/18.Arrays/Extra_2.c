#include <stdio.h>
#define N 10
/*Define a macro*/

int main(){
    int arr[N] = {0};  // Explicitly initialize all elements to zero
    for(int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
