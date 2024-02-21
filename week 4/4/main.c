#include <stdio.h>
#include <stdlib.h>
void repeating (int arr[],int n);
int main()
{
    int n;

    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elments of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
     repeating (arr,n);

   return 0;
}
void repeating (int arr[],int n){
    int found =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d", arr[i]);
                found =1;
                break;
            }
        }
    }
    if(found==0){
        printf("there i mo reapeated numbers");
    }
   

}
