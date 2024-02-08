#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float avr,sum=0;
    printf("enter 10 numbers\n");
    for(int i=0;i<10;i++){
        scanf("%d",&n);
        sum+=n;
    }
   avr=sum/10;
   printf("the sum =%.2f and the avr =%.2f\n",sum,avr);

    return 0;
}
