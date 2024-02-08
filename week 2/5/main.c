#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;

    printf("Enter 3 numbers\n");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y){
        if(x>z){
            printf("the max number is %d",x);
        }
        else if(z>x){
             printf("the max number is %d",z);
        }
    }
    else if(y>z)
    {
         printf("the max number is %d",y);
    }
    else{
         printf("the max number is %d",z);
    }
    return 0;
}
