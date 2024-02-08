#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,mul=1;
    printf("enter the number you want its factorial \n");
    scanf("%d",&n);
    x=n;
    while(n!=0){
        mul*=n;
        n--;
    }
    printf("factorial of  %d = %d",x,mul);
    return 0;
}
