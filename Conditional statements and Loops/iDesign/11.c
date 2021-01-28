/* Decimal to Binary Conversion */

#include<stdio.h>
#include<math.h>
int main(){
    int n, bin=0, dec, i=0;
    printf("Enter the decimal number\n");
    scanf("%d", &n);
    dec = n;
    while(n>0){
        bin = bin + ((n%2) * pow(10,i));
        i++;
        n=n/2;
    }
    printf("The binary equivalent of decimal number %d is %d", dec,bin);
    return 0;
}