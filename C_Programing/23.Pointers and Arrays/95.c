/*Character array and pointers*/
#include <stdio.h>
#include <string.h>

int main(){
    char C[4] = "JOHN";
    int len = strlen(C);
    printf("Size in bytes: %d, ",sizeof(C) );   printf("Str Len: %d, ", len); printf("%s\n", C);

    //when define exaclty same array size C[4], then we get garbeg resluts!
    //Define at leaset size+1, C[5]
    //This way the size is 5 bytes but lenght is only 4, the null terminator reserve the extra byte
    char A[5] = "JOHN";
    len = strlen(A);
    printf("Size in bytes: %d, ",sizeof(A) );    printf("Str Len: %d, ", len);    printf("%s\n", A);

}