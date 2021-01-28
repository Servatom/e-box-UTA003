/* Sum of Digits */

#include<stdio.h>
int main(){
    int n, n1, sum = 0;
    printf("Enter the value :\n");
    scanf("%d", &n);
    n1 = n;
    while(n>0){
        sum = sum +(n%10);
        n = n/10;
    }
    printf("Sum of digits in %d is %d", n1, sum);
    return 0;
}