#include <stdio.h>
#include <string.h>

int main() {

    char text1[] = "abcd";
    char text2[] = "efgh";
    char text3[] = "abcd";

    int result = strcmp(text1, text2);      // String Compare
    printf("%d\n", result);

    result = strcmp(text1, text3);
    printf("%d", result);
    return 0;
}