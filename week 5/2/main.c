#include <stdio.h>
#include <stdlib.h>
int sum(int*x,int *y){
 int sum;
 sum=*x+*y;
 return sum;

}

int main()
{
    int x,y;
    printf("enter two numbers please\n");
    scanf("%d %d",&x,&y);
    printf("the sum of %d + %d=%d",x,y,sum(&x,&y));
    return 0;
}
