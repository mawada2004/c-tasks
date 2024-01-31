#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("enter two numbers : ");
    scanf("%d %d",&x,&y);
    printf("the arithmetical operations are\n");
    printf("%d+%d=%d\n",x,y,(x+y));
    printf("%d-%d=%d\n",x,y,(x-y));
    printf("%d*%d=%d\n",x,y,(x*y));
    printf("%d/%d=%d\n",x,y,(x/y));

    printf(" \n");

     printf("the logical operations are\n");
     printf("%d && %d= %d\n",x,y,(x&&y));
     printf("%d || %d= %d\n",x,y,(x||y));
     printf("!%d = %d\n",x,(!x));
     printf("!%d = %d\n",y,(!y));

     printf(" \n");

     printf("the bitwise operations are\n");
     printf("%d & %d= %d\n",x,y,(x&y));
     printf("%d | %d= %d\n",x,y,(x|y));
     printf("%d ^ %d= %d\n",x,y,(x^y));
     printf("~%d= %d\n",x,~x);
     printf("~%d= %d\n",y,~y);


    return 0;
}
