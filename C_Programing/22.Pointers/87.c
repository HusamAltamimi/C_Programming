#include <stdio.h>

int main(){

    int a = 1035, *p = &a;
    printf("%d\n%d\n%d", &a, p, p+1); /*Increament happens with the size of varialbe = 4 bytes = 4 places*/
    printf("\n%d\n%d ", *p, *(p+1));    /*The arbitrary value at address p+1, can be printed as int or char*/

    /*type casting, only consider first memory location*/
    /*it will assign only the first byte of var_a and treat it as char or int depend in printf*/
    char* pChar;
    pChar = (char*)p; 
    printf("\n\n%d\n%d", pChar, *pChar);

    /*Generic pointer address*/
    /*Mean we don't have to type casting*/
    void* pGen;
    pGen = p;
    printf("\n\n%d", pGen);
    /*printf("\n%d", *pGen); --> Error, compiler can't determine what is this address represent
    printf("\n\n%d", pGen+1); --> also not possibel, we don't know how much the increament size */
    
    return 0;
} 