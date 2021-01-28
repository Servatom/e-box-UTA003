/*
    Functions- Array Type
*/
#include<stdio.h>
#include<stdlib.h>
int findType(int n, int *a)
{
    int count=0 ;

    for(int i=0 ; i<n ; i++)
    {
        if(*a%2==0)
            ++count ;
        a++ ;
    }
    if(count==n)
        return 1 ;
    else if(count==0)
        return 2 ;
    else  
        return 3 ;
}
int main()
{
    int *ar,n ;
    printf("Enter the number of elements in the array\n") ;
    scanf("%d",&n) ;
    ar=(int*)malloc(n*sizeof(int)) ;
    int *ptr=ar ;
    printf("Enter the elements in the array\n") ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",ptr) ;
        ptr++ ;
    }
    ptr=ar ;
    int check=findType(n,ar) ;
    if(check==1)
        printf("The array is Even") ;
    else if(check==2)
        printf("The array is Odd") ;
    else  
        printf("The array is Mixed") ;
    return 0 ;
}