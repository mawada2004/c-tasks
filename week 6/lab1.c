#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,x;

   printf("Enter number of subjects:");
   scanf("%d",&n1);
   int *ptr=(int *)calloc(n1,sizeof(n1));
   if(ptr==NULL)
   {
       printf("Memory isnot free");
       exit(1);
   }
   printf("Enter Degrees:");
   for(int i=1;i<=n1;i++)
   {
       scanf("%d",(ptr+i));
   }

   for(int i=1;i<=n1;i++)
   {
       printf("Degree of %d=%d\n",i,*(ptr+i));
   }

   printf("Do you want to add more subjects?");
   scanf("%d",&x);
   if(1)
   {
       printf("Enter number of subjects you want to add:");
       scanf("%d",&n2);
      ptr=(int *)realloc(ptr,n1*sizeof(int));
      if(ptr==NULL)
      {
       printf("Memory is not avaliable");
       exit(1);
      }
      printf("Enter Degrees:");
     for(int i=n1+1;i<=n1+n2;i++)
   {
       scanf("%d",(ptr+i));
   }

     for(int i=n1+1;i<=n1+n2;i++)
   {
       printf("degree of %d=%d\n",i,*(ptr+i));
   }
   }
   else
   {
       free(ptr);
   }
    return 0;
}

