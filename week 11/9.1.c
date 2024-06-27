#include <stdio.h>
#include <string.h>
#include <math.h>

int bin_to_deci (char *bin);
int main() {

    char bin[100];
   printf("enter a binary number");
   scanf("%s",bin);
   int decimal =bin_to_deci(bin);
    printf("%s in binary = %d in decimal",bin,decimal);

    return 0;
}

int bin_to_deci (char *bin)
{
    int decimal=0;
    int leng=strlen(bin);

    for (int i = 0; i < leng; ++i) {
        if (bin[leng - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }

    return decimal;
}
