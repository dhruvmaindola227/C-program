#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    printf("Enter number of row of 1st array => ");
    scanf("%d", &r1);
    printf("Enter number of column of 1st array => ");
    scanf("%d", &c1);

    if (r1 == c1)
    {
        int arr1[r1][c1];

        printf("\nEnter elements in 1st array \n");

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("Enter element at [%d][%d] => ", i, j);
                scanf("\n%d", &arr1[i][j]);
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

        int rowsum[r1];
        int colsum[c1];

        for (int i = 0; i < r1; i++)
        {
            rowsum[i] = 0;
            colsum[i] = 0;
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                rowsum[i] += arr1[i][j];
            }
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                colsum[i] += arr1[j][i];
            }
        }

        for (int i = 0; i < c1; i++)
        {
            printf("Sum of row %d = %d \n", i, rowsum[i]);
        }

        for (int i = 0; i < c1; i++)
        {
            printf("Sum of column %d = %d \n", i, colsum[i]);
        }

        return 0;
    }
}