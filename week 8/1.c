#include <stdio.h>
struct employees{
    int salary;
    int bonus;
    int deduction ;

}mohsen,maged,mariam;
int main() {

    printf("enter the salary ,bonus and deduction for mohsen");
    scanf("%d %d %d ",&mohsen.salary,&mohsen.bonus,&mohsen.deduction);
    printf("enter the salary ,bonus and deduction for maged");
    scanf("%d %d %d ",&maged.salary,&maged.bonus,&maged.deduction);
    printf("enter the salary ,bonus and deduction for mariam");
    scanf("%d %d %d ",&mariam.salary,&mariam.bonus,&mariam.deduction);
    printf("the total for mohsen :%d",mohsen.salary+mohsen.bonus-mohsen.deduction);
    printf("the total for maged :%d",maged.salary+maged.bonus-maged.deduction);
    printf("the total for mariam :%d",mariam.salary+mariam.bonus-mariam.deduction);


    return 0;
}
