#include<stdio.h>
//selection sort.
int main(){
    int n;
    
    printf("Enter the size of the array");
    scanf("%d" , &n);
    int arr[n];
    printf("Enter the elements");
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int max= arr[0];
    int temp;
    int maxIndex;
    printf("before sorting\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }


    for(int i = 0 ; i < n ; i++){
        max = 0;
    for(int j = 0 ; j < n - i ; j++){
        if(arr[j] > max){
            max = arr[j];
            maxIndex = j;
        }
    }
    temp = arr[n-1-i];
    arr[n-1-i] = arr[maxIndex];
    arr[maxIndex] = temp;
    }

    printf("\nafter sorting\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }
    
}