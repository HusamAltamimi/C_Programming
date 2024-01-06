#include <stdio.h>

int main() {
    int x[2][3] = { {1, 2, 3} , {4, 5, 6} };
    int y[2][3] = {1, 2, 3, 4, 5, 6}; /*Same result*/

    x[1][2] = 9;
    printf("%d\n%d", x[0][0], x[1][2]);
}