/*
    Count the number of characters in the file
*/

#include <stdio.h>

int main(){
    FILE *file_input = fopen("sample.txt", "r");

    char c;

    int count = 0;
    while((c = fgetc(file_input)) != EOF){
        count = count + 1;
    }

    printf("The number of characters present in the file is %d\n", count-1);
    fclose(file_input);
    return 0;
}