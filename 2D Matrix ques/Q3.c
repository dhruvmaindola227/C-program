#include<stdio.h>

int main(){

    int matrix[3][3];
    int resultMatrix[3][3]={0};
    printf("Enter the elements in for a 3 X 3 Matrix.\n");
    printf("Enter values for matrix \n");
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 3 ; col++){
                 scanf("%d" , &matrix[row][col]);
        }
    }

    printf("original matrix is\n");
for(int row = 0 ; row < 3 ; row++){
    printf("\n");
        for(int col = 0 ; col < 3 ; col++){
                printf("%d  " , matrix[row][col]);
        }
    }
printf("\n");
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 3 ; col++){
               resultMatrix[col][row] = matrix[row][col];
        }
    }
printf("transposed matrix is\n");
for(int row = 0 ; row < 3 ; row++){
    printf("\n");
        for(int col = 0 ; col < 3 ; col++){
                printf("%d  " , resultMatrix[row][col]);
        }
    }
    return 0;
}