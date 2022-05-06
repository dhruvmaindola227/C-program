#include<stdio.h>
int main(){
    int arr[] = {1,4,5,2,3}; 
    int maxNum = arr[0];
    int prevMaxNum = 0;
    for(int i = 0 ; i < 5 ; i++){
        if(arr[i] > maxNum){
            prevMaxNum = maxNum;
            maxNum = arr[i];
        }
        else if(arr[i] > prevMaxNum){
            prevMaxNum = arr[i];
        }
    }
    printf("answer is %d" , prevMaxNum);
    return 0;
}
