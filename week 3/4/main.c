#include <stdio.h>
#include <stdlib.h>
  long id;
  long pass;
  int login (long id ,long pass);
int main()
{
  login(id,pass);
    return 0;
}
int login (long id ,long pass)
{
    printf("enter the user name :");
    while(1){
    scanf("%ld",&id);
   if(id==95827){
    printf("your username is correct \n");
    printf("enter your password:");
    for(int i=1;i<=3;i++){
    scanf("%ld",&pass);
    if(pass ==98765432){
        printf("welcome");
        return 1;
    }
    else if(i<3){
        printf("try again");
    }
    else
    {
        ("failed");
        return 0;
    }
    }
   }
   else{
    printf("wrong user name  please try again");}
  }
}

