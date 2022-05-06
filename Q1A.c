#include <stdio.h>
//Q1 a) Insertion.
int main()
{ 
    int arr[6];
    int i;
    int location;
    int element;
    printf("Enter 5 elements in the array.");
    for(i = 0 ; i < 5 ; i++){
        scanf("%d" , &arr[i]);
    }
    printf("Enter the location where you want to insert the element.");
    scanf("%d" , &location);
    printf("Enter the element you want to put.");
    scanf("%d" , &element);
    //[1,2,3,4,5,__] //[1,2,3,3,4,5]
    for(i = 5 ; i > location - 1 ; i--){
        arr[i] = arr[i-1];
    }
    arr[location - 1] = element;
    for(i = 0 ; i < 6 ; i++){
        printf("%d  " , arr[i]);
    }
return 0;
}
