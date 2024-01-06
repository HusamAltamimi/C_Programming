#include <stdio.h>

int main() {

    while(1) {
        int num;
        printf("Enter Number: ");
        scanf("%d",&num);

        if (num > 0) {
            printf("Positive Value");
            break;
        }
        if (num < 0 && num % 2 == 0){
            printf("Negative Even\n");
            continue;
        }
        if (num < 0 && num % 2 != 0){
            printf("%d\n",num);
        }
    }
    return 0;
}