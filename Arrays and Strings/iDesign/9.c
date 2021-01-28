/* String Sorting */

#include <stdio.h>
#include <string.h>
int main(){
    char str[20], temp;
    printf("Enter the input string\n");
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        for(int j = i+1; j < len; j++)
        {
            if(str[j] < str[i])
            {
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }
    printf("The output string is %s", str);
    return 0;
}