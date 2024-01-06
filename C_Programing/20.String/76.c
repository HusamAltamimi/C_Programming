#include <stdio.h>

int main(){

    char str[] = "Programiz";

    printf("%c\n", str[0]);
    str[2] = 'G';               // Access and change charecter
    printf("%s", str);

    return 0;
}