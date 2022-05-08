#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    printf("Enter number of row of 1st array => ");
    scanf("%d", &r1);
    printf("Enter number of column of 1st array => ");
    scanf("%d", &c1);
    printf("Enter number of row of 2nd array => ");
    scanf("%d", &r2);
    printf("Enter number of column of 2nd array => ");
    scanf("%d", &c2);

    if (r1 == c1 && r1 == r2 && r2 == c2 && c1 == c2)
    {
        int arr1[r1][c1];
        int arr2[r2][c2];

        printf("\nEnter elements in 1st array \n");

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("Enter element at [%d][%d] => ", i, j);
                scanf("\n%d", &arr1[i][j]);
            }
        }

        printf("\nEnter elements in 2nd array \n");

        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("Enter element at [%d][%d] => ", i, j);
                scanf("\n%d", &arr2[i][j]);
            }
        }

        printf("1st array \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf(" %d ", arr1[i][j]);
            }
            printf("\n");
        }

        printf("2nd array \n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf(" %d ", arr2[i][j]);
            }
            printf("\n");
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                if (arr1[i][j] != arr2[i][j])
                {
                    printf("\nThe 2 matrices are not equal\n");
                    return 0;
                }
            }
        }

        printf("\nThe 2 matrices are equal\n");

        return 0;
    }
}
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
// 	int **arr, **arrb ,flag = 1;
// 	int sizei,sizej;
// 	printf("Enter the row and column for matrix : ");
// 	scanf("%d %d",&sizei,&sizej);
	
// 	arr = (int **)malloc(sizeof(int)*sizei);
// 	for(int i=0 ; i < sizei ; i++)
// 		arr[i] = (int *)malloc(sizeof(int)*sizej);
	
// 	arrb = (int **)malloc(sizeof(int)*sizei);
// 	for(int i=0 ; i < sizei ; i++)
// 		arrb[i] = (int *)malloc(sizeof(int)*sizej);
	
// 		printf("Enter the value for matrix1 : ");
// 	for(int i=0 ; i < sizei ; i++)
// 		for(int j=0 ; j < sizej ; j++)
// 			scanf("%d",&arr[i][j]);
// 	printf("Enter the value for matrix2 : ");
// 	for(int i=0 ; i < sizei ; i++)
// 		for(int j=0 ; j < sizej ; j++)
// 			scanf("%d",&arrb[i][j]);
	
// 	for(int i =0 ; i < sizei; i++)
// 		for(int j=0 ; j < sizej ; j++)
// 			if(arr[i][j] != arrb[i][j])
// 				{
// 						flag = 0 ;
// 						break;
// 				}
	
// 	if(flag == 1)
// 		printf("Two matrices are equal \n");
// 	else
// 		printf("Two matrices are not equal \n");
// 	return 0;
// }