#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    unsigned int num;
    int bit;

    printf("Enter any number: ");
    scanf("%u", &num);

    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &bit);

    if (bit < 0 || bit > 31) {
        printf("Bit position must be between 0 and 31.\n");
        return 1;
    }

    // Check if the nth bit is 0 or 1
    if (num & (1 << bit)) {
        printf("The %d bit is set to 1.\n", bit);
    } else {
        printf("The %d bit is set to 0.\n", bit);
    }

    return 0;

}
