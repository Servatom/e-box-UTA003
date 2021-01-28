/* Ascending Order */

#include <stdio.h>
int main(){
    int n, a[15], temp;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        if(a[j] < a[i])
        {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}