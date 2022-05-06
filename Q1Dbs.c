#include<stdio.h>
//Q1 d) Binary search without recursion
void main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10}; 
	int start = 0; 
	int end = 9;
	int mid;
	int target;
	printf("Array is ");
	for(int i = 0 ; i < 10 ; i++){
		printf("%d " , arr[i]);
	}
	printf("\nEnter the target element you want to search");
	scanf("%d" , &target);
	while (start <= end){
		int mid = (end - start)/2;
		if(arr[mid] == target){
			printf("element found at %d" , mid);
			return ;
		}
		else if(target > arr[mid]){
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}
	printf("Target does not exist in the array!");
	return ;
}