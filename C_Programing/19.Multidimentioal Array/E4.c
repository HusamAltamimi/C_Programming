#include <stdio.h>

int main(){
    const int a[] = {1, 2, 3, 4, 5,6, 7, 8, 9}; 
    a[1] = 2; /*const mean we cann't change the elements later*/ /*Error!*/

    return 0;
}