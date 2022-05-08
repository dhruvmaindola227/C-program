#include<stdio.h>

int main(){
    int arr[] = {1,2,7,4,3,6,8};
    int max = arr[0];
    int sum = 0;
    //find the max number.
    for(int i = 0 ; i < 7 ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    } 
    printf("\nArray is ");
    for(int i = 0 ; i < 7 ; i++){
        printf("%d ",arr[i]);
    }
    //find the sum of the array.
    for(int i = 0 ; i < 7 ; i++){
        sum+=arr[i];
    }
    int missingNumber;
    missingNumber = max - (sum - 7*8/2); //formula actually is maxNum - (sum - n*(n+1)/2) so 7 here is size of the array. 
    printf("\nMissing number is : %d " , missingNumber);
    }