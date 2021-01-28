/*
    Odd or Even
*/

#include <stdio.h>

void oddoreven(int *a);

int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);

    oddoreven(&a);
    return 0;
}

void oddoreven(int *a){
    if(*a%2 == 0){
        printf("%d is an even number\n", *a);
    }
    else{
        printf("%d is an odd number\n", *a);
    }
}