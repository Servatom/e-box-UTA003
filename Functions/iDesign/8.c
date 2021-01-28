/* Recursion 3 : Compute a^n */

#include<stdio.h>
int computePower(int a, int n);
int main(){
    int a,n;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("The value of %d power %d is %d",a,n,computePower(a,n));
    return 0;
}
int computePower(int a, int n){
    if(n==0)
    return 1;
    else
    return a*computePower(a,n-1);
}