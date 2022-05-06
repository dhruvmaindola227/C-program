#include<stdio.h>

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
    int maxNum = 0;
    int prevMaxNum = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > maxNum){
            prevMaxNum = maxNum;
            maxNum = arr[i];
        }
        else if(arr[i] > prevMaxNum){
            prevMaxNum = arr[i];
        }
    }
    printf("Largest number is %d " , maxNum);
    printf("\nSecond Largest number is %d " , prevMaxNum);
    return 0;
}