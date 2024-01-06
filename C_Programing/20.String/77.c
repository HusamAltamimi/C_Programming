#include <stdio.h>

int main() {

    char str[50];

    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);

    str[0] = 'X';
    printf("%s", str);

    return 0;
}

/*
Accept Input form user then print it after changing the first letter to X
*/