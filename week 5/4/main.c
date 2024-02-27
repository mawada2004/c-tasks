#include <stdio.h>
#include <stdlib.h>

void bubble (int arr[],int size){
   for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]>arr[j]){
            arr[i]=arr[i]+arr[j];
            arr[j]=arr[i]-arr[j];
            arr[i]=arr[i]-arr[j];

        }
    }
   }
}


int main()
{
    int arr[]={6,9,3,11,5,0,2};
    int size =sizeof(arr)/sizeof(arr[0]);
    bubble (arr,size);

    printf("the array after applaying bubble sort is ");
    for(int i=0;i<size;i++){
        printf("%d  ",arr[i]);
    }


    return 0;
}
