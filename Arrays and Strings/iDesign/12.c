/* String reverse without special characters */

#include<stdio.h>
#include<string.h>
int main()
{   
    char arr[100];
    scanf("%s",arr);
    int d=strlen(arr);
    int i=0,j=d-1,temp=0;
    while(i<j){
        int flag=0,count=0;
        if((arr[i]>=97 && arr[i]<=122) || (arr[i]>=65 && arr[i]<=90))
            flag=1;
        if((arr[j]>=97 && arr[j]<=122) || (arr[j]>=65 && arr[j]<=90))
            count=1;
        if(flag==0){
            i++;continue;
        }
        if(count==0){
            j--;
            continue;
        }
        if(flag==1 && count==1){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    printf("%s",arr);
    return 0;
    
    
    
}