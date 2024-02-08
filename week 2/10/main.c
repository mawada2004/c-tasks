#include <stdio.h>
#include <stdlib.h>

int main() {
    int id = 1234;
    long pass;
    long correctpass = 23122004;

    printf("Enter your ID:\n");
    scanf("%d", &id);

    if (id == 1234) {
        for (int i = 0; i < 3; i++) {
            printf("Enter your password:\n");
            scanf("%ld", &pass);
            if (pass == correctpass) {
                printf("Welcome\n");
                return 0;
            } else {
                printf("You are not registered\n");
            }
        }
        printf("No more tries\n");
    } else {
        printf("You are not registered\n");
    }

    return 0;
}
