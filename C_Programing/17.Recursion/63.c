#include <stdio.h>

int sum(int n);

int main(){
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);
    result = sum (number);
    printf("sum = %d", result);

    return 0;
}

int sum(int n){
    if (n != 0) {
        printf("Now we compute number: %d\n",n);
        return n + sum (n-1);
    }
    else {
        printf("We compute only zero\n");
        return 0;
    }
}

