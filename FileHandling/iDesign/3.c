/*
    Number of line in the file
*/

#include <stdio.h>

int main(){
    FILE *input = fopen("input.txt", "r");

    char c;
    int count = 0;
    while((c = fgetc(input)) != EOF){
        if(c == '\n'){
            count++;
        }
        else{
            continue;
        }
    }

    printf("The file has %d lines\n", count);
    return 0;
}