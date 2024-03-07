#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100],ch;
    printf("enter a string\n");
    gets(s);
    printf("enter the letter you want:\n");
    scanf("%c",&ch);
    int len=strlen(s);

   for(int i=1;i<len;i++){
    if(s[i]== ch){
        printf("found at index %d",i);
        break;
    }
   }


    return 0;
}
