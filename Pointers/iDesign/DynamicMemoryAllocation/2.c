/*
    Functions- Standard Deviation
*/

#include <stdio.h>
#include <math.h>

float findMean(int n, int *a);
float standardDeviation(int n, int *a);

int main(){
    int size;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &size);

    if(size < 0){
        return 1;
    }

    printf("Enter the elements in the array\n");
    int number_array[size];

    for(int i = 0; i < size; i++){
        scanf("%d", &number_array[i]);
    }
    float standard_deviation = standardDeviation(size, number_array);
    printf("The standard deviation is %.2f\n", standard_deviation);
    return 0;
}

float findMean(int n, int *a){
    float mean = 0;
    float sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + (float)(*(a++));
    }
    mean = (float)(sum/n);
    return mean;
}

float standardDeviation(int n, int *a){
    float sd = 0;
    int *array = a;
    float mean = findMean(n, array);
    for(int i = 0; i < n; i++){
        sd = sd + pow((*(a++) - mean), 2);
    }

    sd = sqrt(sd/n);
    return sd;
}