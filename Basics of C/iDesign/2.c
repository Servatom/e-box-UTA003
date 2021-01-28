/* Odd or Even using Bitwise and Operator */

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number :\n");
    scanf("%d", &n);
    printf((n&1)?"Odd":"Even");
}