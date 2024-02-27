#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10;
    printf("%d\n",n);
    int *p =&n;
    *p=20;
    printf("%d\n",*p);
    return 0;
}
