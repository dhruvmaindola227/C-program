#include<stdio.h>

int main(){

    int matrix1[2][2];
    int matrix2[2][2];
    int resultMatrix[2][2];
    int sum = 0;
    printf("Enter the elements in for a 2 X 2 Matrix.\n");
    printf("Enter values for matrix 1\n");
    for(int row = 0 ; row < 2 ; row++){
        for(int col = 0 ; col < 2 ; col++){
                 scanf("%d" , &matrix1[row][col]);
        }
    }

    printf("Enter values for matrix 2\n");
    for(int row = 0 ; row < 2 ; row++){
        for(int col = 0 ; col < 2; col++){
               scanf("%d" , &matrix2[row][col]);
        }
    }

            for(int i = 0 ; i < 2 ; i++){
                   for(int j = 0 ; j < 2 ; j++){
                       sum = 0;
                       for(int k = 0 ; k < 2 ; k++){
                            sum = sum + (matrix1[i][k] * matrix2[k][j]);
                       }
                       resultMatrix[i][j] = sum;
                   }
               }
        

    for(int row = 0 ; row < 2 ; row++){
        printf("\n");
            for(int col = 0 ; col < 2 ; col++){
                    printf("%d  " , resultMatrix[row][col]);
            }
        }
    


    return 0;
}