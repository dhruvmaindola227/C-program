#include<stdio.h>
#include<stdlib.h>
int main(){
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
    
    printf("Enter another element to the array at last.");
     ptr = (int*)realloc(ptr , 2*size);
     for (int i = size; i < 2*size; i++)
     {
         scanf("%d" , ptr + i);
     }

    printf("[ ");
      
    for (int i = 0; i < 2*size; i++)
    {
          printf("%d  " , *(ptr+i));
     }
      printf("]");

      

    return 1;
}