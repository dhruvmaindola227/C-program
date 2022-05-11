#include<stdio.h>
#include<stdlib.h>
int main(){

    int size , *ptr;
    printf("Enter the number of elements for array");
    scanf("%d" , &size);
    ptr = (int*) malloc(size*sizeof(int));
    //this gives us a continious block of memory of size * sizeof(int) [for example size = 5 and sizeof(int) is 2. We will get 10 bytes of memory.]
    //we have to type cast the void pointer to the type of the ptr.
    //if ptr is of int then we have to type case the returned void pointer to int.
    
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

    return 0;

}