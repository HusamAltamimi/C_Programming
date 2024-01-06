#include <stdio.h>

int main() {
    int num;
    printf("Enter the number between 1 to 7: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Sunday ");
        break;
    case 2:
        printf("Monday ");
        break;
    case 3:
        printf("Tuesday ");
        break;
    case 4:
        printf("Wednesday ");
        //break; if you don't include break, then all the cases after will be executed
    case 5:
        printf("Thursday ");
        break;
    case 6:
        printf("Friday ");
        break;   
    case 7:
        printf("Saturday ");
        break;
    default:
        printf("Invalid Number ");
    }
    return 0;
}