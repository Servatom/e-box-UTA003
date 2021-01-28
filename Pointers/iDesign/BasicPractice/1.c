/*
    Addition of two numbers
*/

#include <stdio.h>

void addition(int *a, int *b);

int main(){
    int a, b;
    int *a_p = &a;
    int *b_p = &b;
    printf("Enter the value of a\n");
    scanf("%d", a_p);      

    printf("Enter the value of b\n");
    scanf("%d", b_p);

    addition(a_p, b_p);
    return 0;
}

void addition(int *a, int *b){
    printf("Sum of two elements = %d", *a + *b);
}