#include<stdio.h>
void main(){
    int n;
    int countOfOdd = 0;
    int oddpointer = 0;;  //pointer being used in oddElement array to store values.
    int evenpointer = 0;  //pointer being used in evenElement array to store values.
    printf("Enter the size of the array");
    scanf("%d" , &n);
    int arr[n];
    printf("Enter the elements");
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    printf("original array ");
    for(int i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }
    //counting the number of odd elements.
    for(int i = 0 ; i < n ; i++){
        if(arr[i] % 2 != 0){
            countOfOdd+=1;
        }
    }    
    int oddElements[countOfOdd];
    int evenElements[n - countOfOdd];
    for(int i = 0 ; i < n ; i++){
           if (arr[i] % 2 != 0 ){ 
            oddElements[oddpointer++] = arr[i];
           }
            else if (arr[i] % 2 == 0){
            evenElements[evenpointer++] = arr[i];
                }
    }
    printf("\nodd array : ");
    for(int i = 0 ; i < countOfOdd ; i++){
        printf("%d  " , oddElements[i]);
    }
    printf("\neven array : ");
    for(int i = 0 ; i < n - countOfOdd ; i++){
        printf("%d  " , evenElements[i]);
    }
        return ;
}


       
