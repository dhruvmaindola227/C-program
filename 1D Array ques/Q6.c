#include<stdio.h>

int main(){
    int size;
    int temp;
    printf("Enter the size of the array");
    scanf("%d" , &size);
    int arr[size];
    printf("Enter the elements");
    for(int i = 0 ; i < size ; i++){
        scanf("%d" , &arr[i]);
    }
    printf("original array ");
    for(int i = 0 ; i < size ; i++){
        printf("%d " , arr[i]);
    }
    int max = arr[0];
    for(int i = 1 ; i < size ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int freqArr[max + 1];
    for(int i = 0 ; i < max + 1 ; i++){
        freqArr[i] = 0;
    }
    for(int i = 0 ; i < size ; i++){
        freqArr[arr[i]]+=1;
    }
    printf("\n unique elements are ");
    for(int i = 0 ; i < max + 1 ; i++){
        if(freqArr[i] == 1){
        printf("%d " ,i);
        }
    }

    return 0;
}