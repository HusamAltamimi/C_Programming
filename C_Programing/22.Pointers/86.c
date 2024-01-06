/*Program to find the largest and smallest elements in an array*/
#include <stdio.h>

void minMax(int arr[], int len, int *min, int *max);

int main(){
    int a[] = {54, 2, 5, 87 ,54 ,3548 ,54, 0, -21 ,-69 ,64, 654, 54, 2, 64, 0};
    int min, max;
    int len = sizeof(a) / sizeof(a[0]);
    minMax(a, len, &min, &max);
    printf("Min value: %d, Max value: %d ", min, max);

    return 0;
}

void minMax(int arr[], int len, int *min, int *max){
    *min = *max = arr[0];
    for(int i = 0; i < len; i++){
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}