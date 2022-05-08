#include<stdio.h>

int main(){

    int matrix[3][3];
    printf("Enter the elements in for a 3 X 3 Matrix.\n");
    printf("Enter values for matrix \n");
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 3 ; col++){
                 scanf("%d" , &matrix[row][col]);
        }
    }
for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 3 ; col++){
                if(row == col && matrix[row][col] != 1){
                    printf("Not an identity matrix");
                    return 0;
                }else if(row != col && matrix[row][col] != 0){
                   
                    {
                        printf("Not an identity matrix");
                        return 0;
                    }
                }
        }
        
    }

    for(int row = 0 ; row < 3 ; row++){
        printf("\n");
        for(int col = 0 ; col < 3 ; col++){
                printf("%d  " , matrix[row][col]);
        }
    }
    printf("\nIt is an identity matrix");
    


    return 0;
}