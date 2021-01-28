#include<stdio.h>
#include<math.h>
int i=1 ;
int findPos(int n)
{
    if(n==1)
        return i ;
    i*=2 ;
    return findPos(n/2) ;
}
int main()
{
    int n ;
    scanf("%d",&n) ;
    printf("%d",findPos(n)) ;
    return 0 ;
}
