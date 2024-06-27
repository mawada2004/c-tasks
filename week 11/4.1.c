#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
    printf("Enter a number");
    scanf("%d",&n);
    int sum =0;
    while(n!=0)
    {
        int x=n%10;
        sum+=x;
        n/=10;

    }
    printf("Sum of digits:%d ",sum);


    return 0;
}
