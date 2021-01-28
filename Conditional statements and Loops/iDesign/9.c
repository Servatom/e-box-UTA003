/* Multiplication Table */

#include<stdio.h>
int main(){
    int n, m, i=1;
    printf("Enter n\n");
    scanf("%d", &n);
    printf("Enter m\n");
    scanf("%d", &m);
    printf("The multiplication table of %d is\n",n);
    while(i<=m){
        printf("%d*%d=%d\n", i, n, (i*n));
        i++;
    }
    return 0;
}