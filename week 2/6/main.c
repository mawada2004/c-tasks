#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Enter the result of 3 * 4\n");
    scanf("%d", &x);
 while (1) {
    if (x != 12) {

            printf("Try again\n");
            scanf("%d", &x);
        }
     else {
        printf("Right answer\n");
        break;
    }}

    return 0;
}
