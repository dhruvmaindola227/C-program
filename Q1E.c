#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array");
    scanf("%d" , &n);
    int arr[n];
    printf("Enter the elements");
    for(int i = 0 ; i < 5 ; i++){
        scanf("%d" , &arr[i]);
    }
    int temp;
    printf("before sorting\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d " , arr[i]);
    }
    for(int i = 1 ; i < 5 ; i++){
        temp = arr[i];
        int j = i - 1;
        while (j >=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    printf("\nafter sorting\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d " , arr[i]);
    }
    
}