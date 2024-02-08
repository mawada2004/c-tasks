#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("enter the multiplication table you want!\n");
    scanf("%d",&i);
    for(int x=0;x<=12;x++){
        printf("%d*%d=%d\n",i,x,(x*i));
    }

    return 0;
}
