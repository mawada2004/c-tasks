#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=0,b=1,result,n,i;
   printf("enter the number");
   scanf("%d",&n);

   for(i=1;i<=n;i++){

    printf("%d ",a);
    result=a+b;
    a=b;
    b=result;

   }

    return 0;
}
