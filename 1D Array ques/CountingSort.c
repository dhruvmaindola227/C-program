#include<stdio.h>
//COUNT SORT.
int main(){
    int arr[] = {5,5,4,3,2}; //{0,1,1,1,1,1}
    int freqArr[6]={0};
    int sumArr[6]={0}; 
    int outputArr[5];
    int i;
    int j;
    int max = arr[0];
    int sum = freqArr[0];
    // first loop to find the maximum number in the array.
    for(i=1;i<5;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    //to create the frequency array.
    for(i=0;i<5;i++){
        freqArr[arr[i]]+=1;
        //arr[i] ki jo value aayegi , usko maanke chalo ki vo 
        //freqArr ke andar ka ek index hai.
        //vahan par jao aur +1 kardo.
    }
    //sum = 0
    //[0,1,1,1,1,1] //freq arr
    //ideal output is [0,1,2,3,4,5]
    //to create the cumulative sum array
    for(i = 0 ; i < 6 ; i++){
        sum += freqArr[i]; 
        sumArr[i] = sum;
    }//cumulative array create hogyi.
    //[0,1,2,3,4,5] //sum array

    //sum vali array me jo bhi index hai usko hum assume kar rahein hai ki vo
    //value hai , original array mein. SUm array ke andar , ith index pe  
    //jo bhi value hogi. vo batayegi ki uss index ke number ke barabar , 
    //ya usse chote number , original me kitne hain?>?>?
     for(i=0;i<5;i++){
            sumArr[arr[i]]-=1;
            outputArr[sumArr[arr[i]]]=arr[i];
        }
    //iss loop ke baad , original array ka sorted version output array me hoga.

    for(i=0;i<5;i++){
        printf("%d\t",outputArr[i]);
    }
    return 0;
}

    
    
