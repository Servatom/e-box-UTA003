/*
    Student Marks
*/

#include <stdio.h>

struct Student{
    int rollno;
    char name[20];
    int marks[5];
    int total;
    float average;
};

int main(){
    struct Student a[3];
    int i, j, max = 0 , index = 0;

    for(i = 0; i < 3; i++){
        printf("Enter the student %d rollno:\n", i+1);
        scanf("%d", &a[i].rollno);

        printf("Enter the student %d name:\n", i+1);
        scanf("%s", a[i].name);
        a[i].total=0;

        for(j = 0; j < 5; j++){
            printf("Enter the student %d marks%d:\n", i+1, j+1);
            scanf("%d", &a[i].marks[j]);
            a[i].total += a[i].marks[j];
        }

        a[i].average = (float)a[i].total/5;
        if(a[i].average > max){
            max = a[i].average;
            index = i;
        }
    }
    printf("Student Details:\n");
    printf("Name:%s\n", a[index].name);
    printf("RollNo:%d\n",a[index].rollno);
    printf("Total:%d\n", a[index].total);
    printf("Average:%.2f\n", a[index].average);

    return 0;
}