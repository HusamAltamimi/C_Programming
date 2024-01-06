#include<stdio.h>

int main(){

    while(1){
        int num;
        printf("Hi,please enter number:  ");
        scanf("%d",&num);
        if (num < 0) {
            break;
        }
        printf("%d\n",num);
    }

    return 0;
}