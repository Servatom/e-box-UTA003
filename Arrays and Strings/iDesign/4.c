/* Sum of even numbers */

#include <stdio.h>
int main(){
    int n, a[15], i, sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
        sum = sum + a[i]; 
    }
    printf("The sum of the even numbers in the array is %d", sum);
    return 0;
}