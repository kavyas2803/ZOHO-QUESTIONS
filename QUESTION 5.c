/*Finding peak element the element which is greater than the element before it and after it in an array*/

#include <stdio.h>

int main() {
   int arr[100],i,n;
   printf("\n Enter the num of array elements");
   scanf("%d",&n);
   printf("\n Enter the array elements");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   if(arr[0]>=arr[1])
     {
         printf("The peak element is %d",arr[0]);
     }
     if(arr[n-1]>=arr[n-2])
     {
         printf("The peak element is %d",arr[n-1]);
     }
     for(int i=1;i<n-1;i++)
     {
         if(arr[i]>=arr[i+1] && arr[i]>=arr[i-1])
         {
             printf("the peak element is %d",arr[i]);
         }
     }
     return 0;
}
