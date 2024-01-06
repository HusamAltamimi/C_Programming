#include <stdio.h>

int main() {

    char str[20]; // Declairing Array Syntax, Array size is Important!
    printf("Enter your name here: ");
    
    fgets(str, sizeof(str) , stdin); //This function can take standerd input from keyboad
    printf("%s", str);

    return 0;
}