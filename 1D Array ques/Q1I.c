#include<stdio.h>
#include<math.h>
//Radix Sort.
int main(){
    int size;
    int currentDigit;
    int sum=0;
    int j;
    printf("Enter the size of the array");
    scanf("%d" , &size);
    int arr[size];
    int outputArr[size];
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
    int freqArr[10]={0};
    int sumArr[10]={0};
    //calculating the number of digits in max number.
    int numberOfDigitsInMax = 0;
    while(max != 0){
        numberOfDigitsInMax++;
        max=max/10;
    }
    //basically run count sort numberOfDigitsInMax times.
    for (int i = 0; i < numberOfDigitsInMax; i++){  
        //for each iteration we want all these to be empty , basically initialized to zero. 
         sum = 0;
        for(j=0;j<10;j++){
            freqArr[j]=0;
            sumArr[j]=0;
             }
             
        //now implementing count sort.
        //first creating the frequency array.
        for(j = 0 ; j < size ; j++){
            currentDigit = (int) ( arr[j] / pow(10 , i) ) % 10;
            // printf("\nfor value of %d , currentdigit in number %d is %d  " , i , arr[j] , currentDigit);
            freqArr[currentDigit]+=1;
        }
   

        // //create the cumulative sum array.
        for (int k = 0; k < 10; k++)
        {
            sum+=freqArr[k];
            sumArr[k] = sum;
        }
       
            //store the values in the output array
            for(int l = size-1 ; l >= 0 ; l--){
            currentDigit = (int) ( arr[l] / pow(10 , i) ) % 10;
            // printf("\nfor value of %d , currentdigit in number %d is %d  " , i , arr[l] , currentDigit);
            sumArr[currentDigit]-=1;
            outputArr[sumArr[currentDigit]] = arr[l];
        }
        //copy the values of the output arrays as we will take the output array as the new input for
        //the next iteration , because for i = 0 we have sorted by the units place. then we want THAT
        //UNITS PLACES SORTED ARRAY to be the new original array and sort THAT according to the tens place.
        for(j = 0 ; j < size ; j++){
            arr[j] = outputArr[j];
        }
        //And set the output array to be empty again because the next iteration will store the new values.
        for(j = 0 ; j < size ; j++){
            outputArr[j] = 0;
        }
        
    }

    printf("\nOutput array is ");
    for(int i = 0 ; i < size ; i++){
        printf("%d  " , arr[i]);
    }

    return 0;
}