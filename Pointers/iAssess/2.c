#include<stdio.h>
void update(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b*2;
    if(*b<0)
    *b=-*b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    update(&a,&b);
    printf("%d %d",a,b);
    return 0;
}

