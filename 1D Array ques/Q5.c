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


for ( int i = 0; i < size; i++){  
        for ( int j = i + 1; j < size; j++) {  
            if ( arr[i] == arr[j])  
            { for ( int k = j; k < size - 1; k++) {   //for every k we are accessing
                                                      //k+1  
                    arr[k] = arr[k + 1];  
                }  
                size--;  
                j--;      
            }  
        }  
    }  
    

    printf("\n new array: ");
    for(int i = 0 ; i < size ; i++){
        printf("%d " , arr[i]);
    }
    return 0;
}