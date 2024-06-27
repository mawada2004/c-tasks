#include <stdio.h>

int main() {
    unsigned int num;
    int zero_bits = 0, one_bits = 0;

    printf("Enter any number: ");
    scanf("%u", &num);

    for (int i = 0; i < 32; i++) {
        if (num & (1 << i)) {
            one_bits++;
        } else {
            zero_bits++;
        }
    }

    printf("Total zero bit is %d\n", zero_bits);
    printf("Total one bit is %d\n", one_bits);

    return 0;
}
