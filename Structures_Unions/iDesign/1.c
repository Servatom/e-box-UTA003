/*
    Structures: Student
*/

#include <stdio.h>
#include <string.h>

int main(){
    struct Student{
        char name[30];
        char department[20];
        int yearOfStudy;
        float cgpa;
    };

    int number_of_students;
    printf("Enter the number of students\n");
    scanf("%d", &number_of_students);

    struct Student students[number_of_students];

    for(int i = 0; i < number_of_students; i++){
        printf("Enter the details of student %d\n", i+1);
        printf("Enter name\n");
        scanf("%s", students[i].name);

        printf("Enter department\n");
        scanf("%s", students[i].department);

        printf("Enter year of study\n");
        scanf("%d", &students[i].yearOfStudy);

        printf("Enter cgpa\n");
        scanf("%f", &students[i].cgpa);
    }

    for(int i = 0; i < number_of_students; i++){
        for(int j = i + 1; j < number_of_students; j++){
            if((strcmp(students[i].name,students[j].name)) > 0){
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("Details of students\n");
    for(int i = 0; i < number_of_students; i++){
        printf("Student %d\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Department: %s\n", students[i].department);
        printf("Year of study: %d\n", students[i].yearOfStudy);
        printf("CGPA: %.2f\n", students[i].cgpa);

    }
    return 0;
}