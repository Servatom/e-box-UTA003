/* Recursion 4 : Sum of digits */

#include <stdio.h>
int computeSum(int n);
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("The sum of digits in %d is %d",n,computeSum(n));
    return 0;
}
int computeSum(int n){
    if(n==0)
    return 0;
    else return (n%10)+computeSum(n/10);
}