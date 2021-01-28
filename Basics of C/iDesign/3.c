/* Largest of three numbers using Ternary Operator */

#include <stdio.h>
int main(){
    int a, b, c, max;
    printf("Enter the numbers :\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("%d is the greatest number",max);
    return 0;
}