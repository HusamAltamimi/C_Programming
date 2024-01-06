#include <stdio.h> /*Matrix Multiplication*/
#define MAX 50

int main (){
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int aRows, aColums, bRows, bColums;
    int i, j, k;
    int sum = 0;

    printf("Enter number of rows and colums of the matrix 'a': ");
    scanf("%d %d", &aRows, &aColums);

    printf("Enter matrix 'a' elements: \n");
    for (i = 0; i < aRows; i++){
        for( j = 0; j < aColums; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter number of rows and colums for 'b': ");
    scanf("%d %d", &bRows, &bColums);

    if(bRows != aColums){
        printf("Sorry we can't multiply matrices a and b");
    }
    else{
        printf("Enter matrix 'b' elements: \n");
        for (i = 0; i < bRows; i++){
            for(j = 0; j < bColums; j++){
                scanf("%d", &b[i][j]);
            }
        }   
    }
    printf("\n");

    for(i = 0; i < aRows; i++){
        for(j = 0; j < bColums; j++){
            for(k = 0; k < bRows; k++){
                sum += a[i][k] * b[k][j]; 
            }
            product [i][j] = sum;
            sum = 0;
        }
    }

    printf("Resultant matrix: \n");
    for(i = 0; i < aRows; i++){
        for(j = 0; j < bColums; j++){
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}