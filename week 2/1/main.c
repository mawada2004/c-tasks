#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter number of hours in a week\n");
    scanf("%d", &n);
    if (n >= 40) {
        printf("Your salary is (50 * %d) = %d\n", n, (n * 50));
    } else {
        printf("Your salary = %f\n", (int)(n * 50 * 0.9));
    }
    return 0;

}
