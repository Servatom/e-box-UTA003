/* Maximum of 3 Numbers */

#include<stdio.h>
int findmaximum(int,int,int);
int main(){
    int a,b,c;
    scanf("%d\n%d\n%d", &a,&b,&c);
    int max= findmaximum(a,b,c);
    printf("%d is the maximum number",max);
    return 0;
}
int findmaximum(int a, int b, int c){
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else
    return c;
}