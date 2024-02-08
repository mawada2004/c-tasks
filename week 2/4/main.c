#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Can you enter your grade please?\n");
    scanf("%d", &x);

    if (x <= 100 && x >= 85)
        printf("Your grade is A*\n");

    else if (x < 85 && x >= 70)
        printf("Your grade is A\n");

    else if (x < 70 && x >= 60)
        printf("Your grade is B\n");

    else if (x < 60 && x >= 50)
        printf("Your grade is C\n");

    else
        printf("You fail\n");

    return 0;
}
