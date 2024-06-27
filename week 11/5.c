#include <stdio.h>
#include <stdlib.h>
int max(int ,int );
int main() {

    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
   printf("the max number :%d",max(a,b));
    return 0;
}
int max(int x,int y)
{
    int max;
    if (x>y)
        max=x;
    else max=y;

    return max;

}
