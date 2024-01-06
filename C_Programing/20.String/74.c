#include <stdio.h>

int main() {

    char str[20]; // Declairing Array Syntax, Array size is Important!
    printf("Enter your name here: ");
    
    scanf("%s", str); // SCANF will onlt take input until the first space!
    printf("%s\n", str);

    return 0;
}