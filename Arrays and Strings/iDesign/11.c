/* Letter Frequency */

#include<stdio.h>
int main()
{
    int a[26]={ 0 };
    char str[200];
    printf("Enter the input string\n");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
            a[str[i]-97]++;
    }
    printf("The letter frequency is\n");
    for(int i=0;i<26;i++)
    {
        if(a[i]!=0)
        printf("%c %d\n",i+97,a[i]);
    }
    return 0;
}