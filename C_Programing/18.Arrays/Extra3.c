#include <stdio.h>
int main(){
    int digits[10] = {0};
    int N; 
    printf("Enter a number: ");
    scanf("%d", &N);

    int rem;
    while (N > 0)
    {
        rem = N % 10;
        if(digits[rem] == 1) {
            break;
        }
        digits[rem] = 1;
        N = N /10;
    }
    if (N > 0)
        printf("Yes!");
    else
        printf("No!");
    
    return 0;
    

}