#include<stdio.h>
int binarySearch(int arr[] , int start , int end , int target);
void main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10}; 
	int start = 0; 
	int end = 9;
	int mid;
	int target;
    int answer;
	printf("Array is "); 
	for(int i = 0 ; i < 10 ; i++){
		printf("%d " , arr[i]);
	}
	printf("\nEnter the target element you want to search");
	scanf("%d" , &target);
    
    answer= binarySearch(arr , 0 , 9 , target);
    if(answer == -1){
        printf("Element not found in the array");
    }else{
        printf("element is at index number %d" , answer);
    }
}

int binarySearch(int arr[] , int start , int end , int target){
    int mid;
    mid = start + (end - start)/ 2;
    //base condition.
    if(start > end){
        return -1;
    }
    if(arr[mid] == target){
        return mid;
    }
    else if(target > arr[mid]){
        return binarySearch(arr , mid+1 , end , target);
    }
    return binarySearch(arr , start , mid - 1 , target);
       
        } 
    

   