#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=8,y=3,z=6;
    int *px ,*py ,*pz;
    px=&x;
    py=&y;
    pz=&z;

    printf("%d %d %d\n",x,y,z);
    printf("%p %p %p\n",px,py,pz);
    printf("%d %d %d\n",*px,*py,*pz);

    pz = px;
    px = py;
    py = pz;

    printf("%d %d %d\n",x,y,z);
    printf("%p %p %p\n",px,py,pz);
    printf("%d %d %d\n",*px,*py,*pz);

    return 0;
}
