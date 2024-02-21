#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int x,y;

    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elments of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }

    printf("for ascending order choose 0,and for descending order choose 1: \n");
    scanf("%d",&y);


   if(y==0){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
              x=arr[j+1];
              arr[j+1]=arr[j];
              arr[j]=x;
            }
        }
    }
     printf("the ascending order is ");
     for (int i=0;i<n;i++){
        printf("%d ,",arr[i]);
     }}

     else if(y==1){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
              x=arr[j+1];
              arr[j+1]=arr[j];
              arr[j]=x;
            }
        }
    }

    printf("the descending order is ");


    for (int i=0;i<n;i++){
        printf("%d ,",arr[i]);
     }
     }

    return 0;
}
