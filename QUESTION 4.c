/*Enter number5
5555544444333332222211111
55554444333322221111
555444333222111
5544332211
54321
*/

#include <stdio.h>

int main() {
   int n,i,j,k;
   printf("\n Enter number");
   scanf("%d",&n);
   for(int i=n;i>=1;i--)
   {
       for(int j=n;j>=1;j--)
       {
           for(int k=1;k<=i;k++)
           {
               printf("%d",j);
           }
       }
       printf("\n");
   }

    return 0;
}
