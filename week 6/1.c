#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>

int main()
{
    printf("enter a string before: ");
    char s[100];
    gets(s);

  for(int i=0;s[i]!='\0';i++){
            if (s[i]>='a'&&s[i]<='z'){
        s[i]=s[i]-32;
    }}
        printf("after :%s",s);


    return 0;
}
