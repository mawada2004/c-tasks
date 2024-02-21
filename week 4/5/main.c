#include <stdio.h>
#include <stdlib.h>

int main()
{ int arr[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};

   for(int i=0;i<5;i++) {
     for(int j=0;j<5;j++){
        printf("%d",arr[i][j]);
     }
     printf("\n");
   }

   for (int i=0;i<5;i++){
        int sumrow =0;
    for(int j=0;j<5;j++){
        sumrow+=arr[i][j];
    }
       printf("the sum of %d row = %d \n",(i+1),sumrow);
   }

   printf("\n");

   for(int i=0;i<5;i++){
        int sumcolumn =0;
    for(int j=0;j<5;j++){
        sumcolumn+=arr[j][i];
    }
          printf("the sum of %d column = %d \n",(i+1),sumcolumn);

   }

    return 0;}
