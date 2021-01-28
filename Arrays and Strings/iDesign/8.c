/* Palindrome */

#include <stdio.h>
int main(){
    char str[50]; int len = 0;
    printf("Enter a string\n");
    scanf("%s", str);
    while(str[len] != '\0')
    {
        len++;
    }
    int begin = 0, middle = len/2, end = len - 1;
    for( ; begin < middle; begin++)
    {
        if(str[begin]!=str[end])
        {
            printf("%s is not a palindrome", str);
            return 0;
        }
        end--;
    }
    if(begin == middle)
        printf("%s is a palindrome", str);
    return 0;
}