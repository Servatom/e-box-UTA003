/* find the maximum element in an array */

#include <stdio.h>
int main(){
    int n, a[15], i, max = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > max)
        max = a[i];
    }
    printf("%d is the maximum element in the array", max);
    return 0;
}