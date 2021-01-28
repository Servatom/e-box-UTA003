//CALCULATOR

#include<stdio.h>
#include<math.h>
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
float division(int a, int b);
int modulo(int a, int b);
float average(int a, int b);
int power(int a, int b);
int main(){
    int a,b,choice;
    float result;
    scanf("%d\n%d\n%d",&a,&b,&choice);
    switch(choice){
        case 1:
        //int result;
        result = addition(a,b);
        printf("%.0f",result);
        break;
        case 2:
        //int result;
        result = subtraction(a,b);
        printf("%.0f",result);
        break;
        case 3:
        //int result;
        result = multiplication(a,b);
        printf("%.0f",result);
        break;
        case 4:
        //float result;
        result = division(a,b);
        printf("%.2f",result);
        break;
        case 5:
        //int result;
        result = modulo(a,b);
        printf("%.0f",result);
        break;
        case 6:
        //float result;
        result = average(a,b);
        printf("%.2f",result);
        break;
        case 7:
        //int result;
        result = power(a,b);
        printf("%.0f",result);
        break;
    }
    return 0;
}
int addition(int a, int b){
    return (a+b);
}
int subtraction(int a, int b){
    return (a-b);
}
int multiplication(int a, int b){
    return (a*b);
}
float division(int a, int b){
    return ((float)a/b);
}
int modulo(int a, int b){
    return (a%b);
}
float average(int a, int b){
    return ((a+b)/2.0);
}
int power(int a, int b){
    return (int)pow(a,b);
}