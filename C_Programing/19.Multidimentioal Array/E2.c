#include <stdio.h>

int main(){

    int row = 0, colums = 0;

    int a[5][5] = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 14, 2, 6, 0}
    };
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            row += a[i][j];
            colums += a[j][i];
        }
        printf("row %d = %d ",i , row); row = 0;
        printf("col %d = %d\n", i , colums); colums = 0;
    }
}