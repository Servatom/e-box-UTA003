/*
    Maximum of 3 numbers
*/

#include <stdio.h>

int maximum(int *a, int *b, int *c);

int main(){
    int a, b, c;

    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);

    printf("Enter the value of c\n");
    scanf("%d", &c);

    int max = maximum(&a, &b, &c);
    printf("Maximum element is %d", max);
    return 0;
}
int maximum(int *a, int *b, int *c){
    if(*a > *b){
        if(*a > *c){
            return *a;
        }
        else{
            return *c;
        }
    }
    else if(*b > *c){
        return *b;
    }
    else{
        return *c;
    }
}