//Prime

#include<stdio.h>
int main(){
    int n, c=0;
    scanf("%d", &n);
    for(int i = 2; i< n/2 +1; i++){
        if(n%i == 0){
            c++;
            break;
        }
    }
    if(c==0)
    printf("Prime");
    else
    printf("Not prime");
    return 0;
}