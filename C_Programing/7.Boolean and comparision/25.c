#include <stdio.h>
#include <stdbool.h>

int main(){

    int age = 18;
    double height = 6.3;

    bool a = (age >= 18) && (height >= 6.0); // AND operator
    bool b = !(age >= 18); // NOT operator
    printf("%d %d",a,b);

    return 0;
}