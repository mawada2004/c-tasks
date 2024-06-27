#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    float a,b,c;
    printf("Enter an operator (+,-,*,/)");
    scanf("%c",&ch);
    printf("Enter two operands");
    scanf("%f %f",&a,&b);
    switch (ch) {
        case '+' :
            printf("%.1f+%.1f=%.1f", a, b, a + b);
            break;
        case '-' :
            printf("%.1f-%.1f=%.1f", a, b, a - b);
            break;
        case '*' :
            printf("%.1f*%.1f=%.1f", a, b, a * b);
            break;
        case '/' :
            printf("%.1f/%.1f=%.1f", a, b, a / b);
            break;
    }
    return 0;
}
