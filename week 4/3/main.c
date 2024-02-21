#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int arr2[100]={0};
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter elments of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){

    if(!arr2[arr[i]]){
        printf("%d",arr[i]);
        arr2[arr[i]]=1;
    }

    }


    return 0;
}
