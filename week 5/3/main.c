#include <stdio.h>
#include <stdlib.h>
static int sum =0; 

int  mul (int x[],int y[],int size,int result[]){

  for(int i=0;i<size;i++){
    result[i]=x[i]* y[i];
    sum+=result[i];
    }

  }



int main()
{
   int x[]={3,4,2,1,4};
   int y[]={2,9,6,1,8};
   int size =sizeof(x)/sizeof(x[0]);
   int result[size];

   mul(x,y,size,result);
   printf("Result array after  multiplication:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    printf("the scalar multiplication = %d",sum);
    return 0;
}
