#include <stdio.h>
/*
Designated initialization*/
int main(){
    int x[10] = {[0] = 1, [5] = 2, [6] =3};
    for(int i = 0; i < 10; i++){
        printf("%d ", x[i]);} printf("\n");

    int y[] = {[0] = 1, [31] = 2, [6] =3};  /*Max length is the highest index = 31+1 elements*/
    for(int i = 0; i < sizeof(y)/sizeof(y[0]); i++){    /**/
        printf("%d ", y[i]);} printf("\n");

    int z[] = {1, 2, 3, [2] = 10, [5] = 90, 6, [8] =4}; /*Designator will win, clash!*/
    for(int i = 0; i < sizeof(z)/sizeof(z[0]); i++){    
        printf("%d ", z[i]);}
    return 0;
}
/*The line you quoted is a common technique in C to determine the size of an array, 
especially when working with arrays in a function where the size is not explicitly passed. 
Let me break it down for you: int size = sizeof(y) / sizeof(y[0]);
Here's what each part does:
sizeof(y): This operator returns the total size (in bytes) of the array y. It calculates the size by multiplying the number of elements by the size of one element. In this case, it's the size of the entire array.
sizeof(y[0]): This returns the size (in bytes) of one element of the array y. Since arrays in C are contiguous blocks of memory, the size of one element is the same for all elements.
sizeof(y) / sizeof(y[0]): This expression calculates the number of elements in the array y. It does so by dividing the total size of the array by the size of one element. The result is the number of elements in the array.
By using this method, you can determine the size of the array dynamically, and if the size of the array changes, you won't need to manually update the size in the loop condition. It's a way to make your code more flexible and less error-prone.
*/