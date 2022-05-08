// #include <stdio.h>
// //Q1 a) Insertion.
// int main()
// { 
//     int arr[6];
//     int i;
//     int location;
//     int element;
//     printf("Enter 5 elements in the array.");
//     for(i = 0 ; i < 5 ; i++){
//         scanf("%d" , &arr[i]);
//     }
//     printf("Enter the location where you want to insert the element.");
//     scanf("%d" , &location);
//     printf("Enter the element you want to put.");
//     scanf("%d" , &element);
//     //[1,2,3,4,5,__] //[1,2,3,3,4,5]
//     for(i = 5 ; i > location - 1 ; i--){
//         arr[i] = arr[i-1];
//     }
//     arr[location - 1] = element;
//     for(i = 0 ; i < 6 ; i++){
//         printf("%d  " , arr[i]);
//     }
// return 0;
// }

#include<stdio.h>
#include<conio.h>
void main(){

   int a[10],n,i,loc,val;
   printf("enter the number of array elements:");
   scanf("%d", &n);
   printf("enter the array elements:");
   for ( i = 0; i < n; i++)
   {
       scanf("%d", &a[i]);
   }
   printf("enter the location:");
   scanf("%d", &loc);
   printf("enter the element to be entered:");
   scanf("%d", &val);
   for ( i = n-1; i >=loc-1; i--)
   {
       a[i+1]=a[i];
   }
       a[loc-1]=val;
   printf("array after insertion:");
    for ( i = 0; i < 10; i++)
   {
       printf("%d  ", a[i]);
   }
   getch();
}