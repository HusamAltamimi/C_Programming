#include <stdio.h>

int main(){
    int age[5];
    
    age[0] = 21;
    age[1] = 25;
    age[2] = 32;

    for ( int i = 0 ; i < 5 ; i++){
        printf("%d\n", age[i]);
    }

    return 0;
}