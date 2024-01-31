#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
   printf("enter a dollar and cents amount \n");
   scanf("%f",&n);
   printf("your money after %5 tax = %.2f",n+(n*0.05));

    return 0;
}
