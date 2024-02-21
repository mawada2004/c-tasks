#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
    int x;

    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elments of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }


    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
              x=arr[j+1];
              arr[j+1]=arr[j];
              arr[j]=x;
            }
        }
    }
    printf("the second largest element is %d",arr[n-2]);

}
