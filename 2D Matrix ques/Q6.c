#include<stdio.h>

int main(){

    int matrix1[4][4];
    int leftSum = 0;
    int rightSum = 0;
    int sum = 0;
    printf("Enter the elements in for a 4 X 4 Matrix.\n");
    printf("Enter values for matrix 1\n");
    for(int row = 0 ; row < 4 ; row++){
        for(int col = 0 ; col < 4 ; col++){
                 scanf("%d" , &matrix1[row][col]);
        }
    }

    printf("array is\n");
    for(int row = 0 ; row < 4 ; row++){
        printf("\n");
        for(int col = 0 ; col < 4 ; col++){
                printf("%d  " , matrix1[row][col]);
        }
    }
 
 for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(i == j){
                    leftSum += matrix1[i][j];
                }
                 if(j == 4 - 1 - i){
                    rightSum +=matrix1[i][j];
                }
        }
        
    }
    sum = leftSum + rightSum;
    printf("Sum of left and right diagonal elements is %d \n" , sum);
 
    return 0;
}