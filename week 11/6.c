#include <stdio.h>
#include <stdlib.h>
int main() {

    int n;
    printf("Enter size of array \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elments in array\n",n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    int counteven=0,countodd=0;
    for (int i = 0; i < n; ++i) {
        if(arr[i]%2==0)
            counteven++;
        else
            countodd++;
    }
    printf("Total even elements: %d\n",counteven);
    printf("Total odd elements: %d",countodd);

    return 0;
}
