#include <stdio.h>
#include <stdlib.h>
int get_max(int,int);
int main()
{
   int i,j;
   printf("enter two numbers to cheack the max:");
   scanf("%d %d",&i,&j);
   printf("the max number is %d",get_max(i,j));
    return 0;
}
int get_max(int x,int y)
{
    int max;
 if (x>y){
    max=x;
 }
 else{
    max=y;
 }
return max;

}
