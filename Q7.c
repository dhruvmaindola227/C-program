#include<stdio.h>

int main(){
    
    int arr[] = {8,7,2,5,3,1};
    int targetSum = 10;
    int freqArr[9]={0};
    int sumArr[9]={0}; 
    int outputArr[6];
    int i;
    int j;
    int left=0;
    int right=5;
    int max = arr[0];
    int sum = freqArr[0];
    //USING COUNT SORT MEANS - 
    //O(N) TIME COMPLEXITY
    //O(MAX) SPACE COMPLEXITY
    //OVERALL COMPLEXITY OF THIS CODE IS -> O(N) 
    printf("\nOriginal array ");
    for(i=0;i<6;i++){
        printf("%d " , arr[i]);
    }
    //to create the frequency array.
    
    for(i=0;i<6;i++){
        freqArr[arr[i]]+=1;
        
    }
    for(i = 0 ; i < 9; i++){
        sum += freqArr[i]; 
        sumArr[i] = sum;
    }
     for(i=0;i<6;i++){
            sumArr[arr[i]]-=1;
            outputArr[sumArr[arr[i]]]=arr[i];
        }
    printf("\nSorted array ");
    for(i=0;i<6;i++){
        printf("%d " , outputArr[i]);
    }
        //till now count sort was being executed. Array is now sorted.

    printf("\nPairs that add up to %d are " , targetSum);
    while(left < right){
        if(outputArr[left] + outputArr[right] == targetSum){
            printf("\n{ %d , %d }", outputArr[left] , outputArr[right]);
            left++;
            right--;
        }
        else if(outputArr[left] + outputArr[right] > targetSum){
            right--;
        }
        else{
            left++;
        }
    }

    
    
    return 0;
}