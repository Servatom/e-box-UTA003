/* Sum of array elements */

#include <stdio.h>
int main(){
    int n, a[15], i, sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i]; 
    }
    printf("The sum of the elements in the array is %d", sum);
    return 0;
}