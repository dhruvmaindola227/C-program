#include<stdio.h>
//bubble sort
int main(){
    int n;
    printf("Enter the size of the array");
    scanf("%d" , &n);
    int arr[n];
    printf("Enter the elements");
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int temp;
    printf("before sorting\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 1 ; j < n - i ; j++){
             if(arr[j-1] > arr[j]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
             }   
        }
    }

    printf("\nafter sorting\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }
    
}