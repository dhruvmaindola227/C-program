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
    int max = arr[0];
    int temp;
    printf("original array ");
    for(int i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }
    //finding max.
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int freqArr[max + 1];
    //setting the values in freqArr to be all 0.
    for(int i = 0 ; i < max + 1 ; i++){
        freqArr[i] = 0;
    }

    //adding the frequencies.
    for(int i = 0 ; i < n ; i++){
        freqArr[arr[i]]+=1;
    }

    //now printing the values.
    for(int i = 0 ; i < max + 1 ; i++){
        if(freqArr[i] > 0){
        printf("\nThe value %d is occuring %d number of times. \n" , i , freqArr[i]);
        }
    }
    return 0;
}