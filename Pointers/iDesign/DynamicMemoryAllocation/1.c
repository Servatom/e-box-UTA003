/*
    Functions- Array Maximum
*/

#include <stdio.h>

int findMax(int n, int *a);

int main(){
    int n;
    int array[20];

    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    if(n > 20){
        printf("Max storage is for 20 elements!\n");
        return 1;
    }

    printf("Enter the elements in the array\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    printf("The maximum element in the array is %d", findMax(n, array));

    return 0;
}

int findMax(int n, int *a){
    int array_temp[n];
    for(int i = 0; i < n; i++){
        array_temp[i] = *a++;
    }

    for(int i = 0; i < n; i++){
        if(array_temp[0] < array_temp[i]){
            int temp = array_temp[i];
            array_temp[i] = array_temp[0];
            array_temp[0] = temp;
        }
    }

    return array_temp[0];
}