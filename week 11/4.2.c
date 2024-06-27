#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,p;
    long long result = 1;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter a power");
    scanf("%d",&p);
    for (int i = 0; i < p; ++i) {
        result*=n;
    }
    printf("Answer = %d",result);
    return 0;
}
