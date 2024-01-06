#include <stdio.h>
#include <string.h>

int main(){
    
    char str1[20];
    char str2[20];
    
    printf("Enter first string: ");
    fgets(str1 , sizeof(str1) , stdin);
    
    printf("Enter second string: ");
    fgets(str2 , sizeof(str2) , stdin);

    if ( strlen(str1) > strlen(str2)) {
        printf("The latger sting is: %s", str1);
    }
    else {
        printf("The larger string is: %s", str2);
    }

    return 0;
}