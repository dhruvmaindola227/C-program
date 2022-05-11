#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[8]= {1,2,3,4,5,6,7,8};
   int odd[4];
   int even[4];
   for(int i = 0;i<8;i++)
   {
       if(arr[i]%2==0)
           {
             even[i]=arr[i];
           }
       else
            {
                odd[i]=arr[i];
            }

   }
   printf("og array: \n");
   for(int i = 0;i<8;i++)
     printf(" %d ",arr[i]);
   printf("Odd array: \n");
   for(int i = 0;i<4;i++)
    printf(" %d ",odd[i]);

     printf("even array: \n");
   for(int i = 0;i<4;i++)
    printf(" %d ",even[i]);
    return 0;
}