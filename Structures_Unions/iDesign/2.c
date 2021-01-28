/*
    Employee using structures
*/

#include <stdio.h>

int main(){
    struct employee{
        char name[50];
        int employeeid;
        int age;
        char designation[50];
        float salary;
    };
    int number_employees = 5;
    struct employee employees[number_employees];

    for(int i = 0; i < number_employees; i++){
        printf("Enter details for employee %d\n", i+1);

        printf("Enter employee name\n");
        scanf("%s", employees[i].name);

        printf("Enter employee id\n");
        scanf("%d", &employees[i].employeeid);

        printf("Enter employee age\n");
        scanf("%d", &employees[i].age);

        printf("Enter employee designation\n");
        scanf("%s", employees[i].designation);

        printf("Enter employee salary\n");
        scanf("%f", &employees[i].salary);
    }

    for(int i = 0; i < number_employees; i++){
        printf("Details of employee %d\n", i+1);
        printf("Employee name:%s\n", employees[i].name);
        printf("Employee id:%d\n", employees[i].employeeid);
        printf("Employee age:%d\n", employees[i].age);
        printf("Employee designation:%s\n", employees[i].designation);
        printf("Employee salary:%.2f\n", employees[i].salary);
    }
    return 0;
}