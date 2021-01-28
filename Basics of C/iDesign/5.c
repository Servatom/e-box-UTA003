/* Celsius to Fahrenheit Converter */

#include <stdio.h>
int main(){
    int c;
    float f;
    printf("Temparature in Celsius:\n");
    scanf("%d",&c);
    f = (1.8 * c) + 32;
    printf("Temparature in Fahrenheit is %.1fF",f);
    return 0;
}