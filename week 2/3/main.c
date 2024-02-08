#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    printf("Can you enter your ID please?\n");
    scanf("%d",&id);
    if(id==1234){
        printf("Harry");
    }
    else if(id==5678){
        printf("Ron");
    }
     else if(id==1145){
        printf("Hermonie");
     }
     else
        printf("Wrong ID");
    return 0;
}
