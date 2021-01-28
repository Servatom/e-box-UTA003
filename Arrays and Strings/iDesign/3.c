/* search for an element ‘a’ in the array */

#include <stdio.h>
int main()
{
    int n, arr[15], a;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &a);
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            printf("%d is present in the array", a);
            return 0;
        }
    }
    printf("%d is not present in the array", a);
    return 0;
}