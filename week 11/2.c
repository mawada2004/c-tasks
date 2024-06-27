#include <stdio.h>
#include <stdlib.h>

int main()
{
  int y;
    printf("Enter Year");
    scanf("%d",&y);

    if(y%4==0&&y%100!=0)
    printf("LEAP YEAR");
    else
        printf("NOT LEAP YEAR");

    return 0;
}
