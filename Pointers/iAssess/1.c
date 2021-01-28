#include <stdio.h>
#include<stdlib.h>
void manipulate(char *a)
{
    int i,len;
    
    for(i=0;*(a+i)!='\0';i++);
    len=i;
    for(i=0;i<len;i++)
    {
        if(*(a+i)=='f'&&*(a+i+1)=='o'&&*(a+i+2)=='o')
        {
            *(a+i)='o';
            *(a+i+2)='f';
            i=0;
        }
    }
}
int main(void) {
    char *a;
    a=(char *)malloc(100*sizeof(char));
    printf("Enter the input string\n");
    scanf("%s",a);
    manipulate(a);
    printf("The output string is %s",a);
    return 0;
}
