/*
    Functions- Lucky String
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkLucky(char * a);

int main(){
    char *string = (char*)malloc(100*sizeof(char));

    printf("Enter the input string\n");
    scanf("%s", &(*string));
    int isLucky = checkLucky(string); //0 false 1 true
    if(isLucky){
        printf("%s is lucky\n", string);
    }
    else{
        printf("%s is not lucky\n", string);
    }

    return 0;
}

int checkLucky(char *a){
    int size = strlen(a);
    int ascii_sum = 0;
    for(int i = 0; i < size; i++){
        ascii_sum = ascii_sum + (int)(*(a++));
    }

    if(ascii_sum%2 == 0){
        //Its lucky
        return 1;
    }
    else{
        return 0;
    }

    return -1;
}