#include<stdio.h>
#include<string.h>

int main()
{
  char s1[100],s2[100];
    printf("Enter a string");
    gets(s1);
    int leng= strlen(s1);

    for (int i = 0; i <leng ; ++i) {
        s2[i]=s1[i];
    }
    printf("The copied string is :");
    for (int i = 0; i < leng; ++i) {
        printf("%c",s2[i]);
    }

   return 0;
    }
