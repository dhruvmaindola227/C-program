#include<stdio.h>
#include<stdlib.h>

void main(){
     int size , *ptr;
    printf("Enter the number of elements for array");
    scanf("%d" , &size);
    ptr = (int*) calloc(size , sizeof(int));
    printf("Enter elements in your array\n");
    for (int i = 0; i < size; i++)
    {   
        scanf("%d" , ptr + i); //ptr + i is called pointer arithmetic.
      }
      
        printf("[ ");
      
    for (int i = 0; i < size; i++)
    {
          printf("%d  " , *(ptr+i));
     }
      printf("]");
    
   free(ptr);
}