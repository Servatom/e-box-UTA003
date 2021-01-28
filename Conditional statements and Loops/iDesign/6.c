/* Switch operations */

#include <stdio.h>
int main(){
    int a, b, choice, result;
    printf("Enter the first value :\n");
    scanf("%d", &a);
    printf("Enter the second value :\n");
    scanf("%d", &b);
    printf("Enter the choice from the menu\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            result = a+b;
            printf("The value after Addition is %d.",result);
            break;
        case 2:
            result = a-b;
            printf("The value after Subtraction is %d.",result);
            break;
        case 3:
            result = a*b;
            printf("The value after Multiplication is %d.",result);
            break;
        case 4:
            result = a/b;
            printf("The value after Division is %d.",result);
            break;
    }
    return 0;
}