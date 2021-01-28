/* OPERATIONS ON STRINGS */

#include <stdio.h>
#define SIZE 20

int stringLength(char string[], int size);
void revString(char string[], char rev_word[], int size);
void concString(char s1[], char s2[], char result[], int size);
int compareString(char s1[], char s2[]);

int main(){
    char word1[SIZE];
    char word2[SIZE];
    scanf("%s", word1);
    scanf("%s", word2);

    //Length of string
    printf("Length of the first string is %d\n", stringLength(word1, SIZE));
    printf("Length of the second string is %d\n", stringLength(word2, SIZE));

    //Rev string
    char rev_word[SIZE];
    revString(word1, rev_word, SIZE);
    printf("The reverse of the first string is %s\n", rev_word);
    
    revString(word2, rev_word, SIZE);
    printf("The reverse of the second string is %s\n", rev_word);

    //Conc string
    char cat_string[SIZE*2];
    concString(word1, word2, cat_string, SIZE);
    printf("The concatenated string is %s\n", cat_string);

    //Compare string
    int diff = compareString(word1, word2);
    if(diff > 0){
        printf("%s appears before %s\n", word2, word1);
    }
    else if (diff < 0){
        printf("%s appears before %s\n", word1, word2);
    }
    else{
        printf("Both the input strings are same\n");
    }
}
int stringLength(char string[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(string[i] != '\0'){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}

void revString(char string[], char rev_word[], int size){
    int temp_size = stringLength(string, size);
    int rev = 0;

    for(int i = temp_size - 1; i >= 0 && rev < temp_size; i--, rev++){
        rev_word[rev] = string[i];
    }
    rev_word[rev] = '\0';
}

void concString(char s1[], char s2[], char result[], int size){
    int oneLength = stringLength(s1, size);
    int twoLength = stringLength(s2, size);
    int j = 0;

    for(int i = 0; i < oneLength; i++, j++){
        result[j] = s1[i];
    }
    for(int i = 0; i < twoLength; i++, j++){
        result[j] = s2[i];
    }
    result[j] = '\0';
}

int compareString(char s1[], char s2[]){
    int i;

    for(i = 0; s1[i] == s2[i]; i++){
        if(s1[i] == '\0'){
            return 0;
        }
    }
    return s1[i] - s2[i];
}