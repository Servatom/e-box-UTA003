/* ODD OR EVEN */

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    printf((n%2==0?"%d is an even number":"%d is an odd number"),n);
}