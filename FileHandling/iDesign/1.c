/*
    File Copy
*/

#include <stdio.h>

int main(){
    FILE *file_input = fopen("input.txt", "r");
    FILE *file_output = fopen("output.txt", "w");

    char character;

    while((character = fgetc(file_input)) != EOF){
        fputc(character, file_output);
    }
    fclose(file_input);
    fclose(file_output);

    return 0;
}