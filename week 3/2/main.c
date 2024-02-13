#include <stdio.h>
#include <stdlib.h>
int i=5,j=8;
void swap (int ,int );
int main()
{

   swap(i,j);
    return 0;
}
void swap (int x,int y)
{
 int i;
 i=x;
 x=y;
 y=i;
 printf("x=%d y=%d",x,y);

}
