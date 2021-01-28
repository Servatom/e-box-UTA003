/* TRIANGLE TYPE */

#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b+c == 180){
        if(a==b && b==c)
            printf("Triangle is equilateral");
        else if(a==b||b==c||a==c){
            if(a==90 || b==90 || c==90)
                printf("Triangle is right isosceles");
            else
                printf("Triangle is isosceles");
        }
        else if(a==90||b==90||c==90)
            printf("Triangle is right");
        else
            printf("Triangle is not special");
    }
    else
    printf("Not a Triangle");
    return 0;
}