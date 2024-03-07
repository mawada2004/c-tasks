#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100],c;
    printf("enter a string\n");
    gets(s);
    int leng =strlen(s);

    for(int i=0;i<leng;i++){
        for(int j=i+1;j<=leng-1;j++){
            c=s[i];
            s[i]=s[j];
            s[j]=c;
        }

        }

 printf("Reversed string: %s",s);

    return 0;
}
