#include<stdio.h>
//Q2 b) Deletion.
void main()
{
    int n;
    int location;
    printf("Enter the size of the array");
    scanf("%d",&n);
	int arr[n];
     printf("Enter the elements of the array");
     for(int i = 0 ; i < n ; i++){
         scanf("%d",&arr[i]);
     }
     printf("Enter the location where you want to delete");
     scanf("%d" , &location);

     for(int i = location - 1 ; i < n ; i++){
        arr[i] = arr[i+1];
     }
     n--;
     for(int i = 0 ; i < n ; i++){
         printf("%d ", arr[i]);
     }
    
    return;
}