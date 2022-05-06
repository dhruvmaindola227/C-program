#include<stdio.h>
void main()
{
	int arr[5];
    int i;
    int elementToSearch;
    printf("Enter 5 elements in the array.");
    for(i = 0 ; i < 5 ; i++){
        scanf("%d" , &arr[i]);
    }
    printf("Enter the element you want to search , we will return you the index it is at.");
    scanf("%d" , &elementToSearch);
    //logic for linear search -> Har ek element pe jaake dekho ki kya ispe hai? agar hai toh index print 
    //print kardo varna aage badhjao.
    for(i = 0 ; i < 5 ; i++){
        if(arr[i] == elementToSearch){
            printf("The element is found at index number %d" , i);
            return ;
        }
    }

    printf("Element was not found");
    return ;
}