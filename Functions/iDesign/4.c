/* Recursion 1 : Factorial */

#include<stdio.h>
int computeFactorial(int);
int main(){
    int n,fact;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    fact=computeFactorial(n);
    printf("The factorial of %d is %d",n,fact);
    return 0;
}
int computeFactorial(int n){
    if(n==0)
    return 1;
    else
    return n*computeFactorial(n-1);
}