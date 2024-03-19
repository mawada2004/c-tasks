#include <stdio.h>

typedef struct students {
  long long  id;
  int prog;
  int math;
  int data;
  int algor;
}stu;
int main() {
   long long  user_id;
   stu arr[10];

    for (int i = 0; i < 10; ++i) {
        arr[i].id=10203040+4*i;
        arr[i].prog=55+2*i;
        arr[i].math=90+i;
        arr[i].data=75+2*i;
        arr[i].algor=80+i;

    }
int attempts=3;
    int found = 0;
    while(attempts>0){
        printf("enter your id:");
        scanf("%lld", &user_id);
        for (int i = 0; i < 10; ++i) {

            if (user_id == arr[i].id) {
                printf("your degree in programming = %d\n", arr[i].prog);
                printf("your degree in discrete math  = %d\n", arr[i].math);
                printf("your degree in data structure = %d\n", arr[i].data);
                printf("your degree in algorithm = %d\n", arr[i].algor);
                found = 1;
                break;
            }
            }
        if (!found) {
            printf("Wrong ID. You have %d attempt(s) left.\n", --attempts);
            if (attempts == 0) {
                printf("You've used all your attempts. Exiting...\n");
                break;
            }
        } else {
            break;
        }


    }
    return 0;
}
