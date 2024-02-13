#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    int count=0 ;
    while(x!=0){
        x/=10;
        count++;
    }
   printf("number of digits in the number you entered  = %d",count);
    return 0;
}
