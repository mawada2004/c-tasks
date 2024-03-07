#include <stdio.h>
#include <stdlib.h>

int main()
{
   char s[100];
   printf("enter a string :");

   gets(s);
   int alphapet=0,numbers=0,special_char=0,i=0;
   while(s[i]!='\0'){
    if((s[i]>='a'&&s[i]<='z')||s[i]>='A'&&s[i]<='Z'){
        alphapet++;
    }
    else if(s[i]>='0'&&s[i]<='9'){
        numbers++;
    }
    else
        special_char++;
         i++;
   }

   printf("Total alphapet :%d\n",alphapet);
   printf("Total numbers :%d\n",numbers);
   printf("Total special char :%d\n",special_char);


    return 0;
}
