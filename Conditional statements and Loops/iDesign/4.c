/* Display Grade */

#include<stdio.h>
int main(){
    int roll_no, mark;
    char name[50],grade;
    printf("Enter the roll number of student\n");
    scanf("%d", &roll_no);
    printf("Enter the name of student\n");
    scanf("%s", name);
    printf("Enter the total mark of student\n");
    scanf("%d", &mark);
    if(mark >= 50){
    if(mark >= 90)
    grade = 'A';
    else if(mark >= 80)
    grade = 'B';
    else if(mark >= 70)
    grade = 'C';
    else if(mark >= 60)
    grade = 'D';
    else if(mark >= 50)
    grade = 'E';
    printf("Grade details\n%d %s %d %c", roll_no, name, mark, grade);
    }
    else
    printf("Grade details\n%d %s %d Fail", roll_no, name, mark);
    return 0;
}