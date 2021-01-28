/*
    Teaching sum of elements
*/
#include<stdio.h>
#include <stdlib.h>

int wrongsetsum(int n, int *a);
int correctsetsum(int n, int *a);

int main(){
	int size;
	scanf("%d", &size);
	int *number_array = (int*)malloc(size*sizeof(int)); //Array
	int *input_array = number_array;

	for(int i = 0; i < size; i++){
		scanf("%d", &(*(input_array++)));
	}

	printf("%d\n%d\n", wrongsetsum(size, number_array), correctsetsum(size, number_array));

	return 0;
}

int wrongsetsum(int n, int *a){
	int sum = 0;
	for(int i = 0; i < n; i++){
		int temp_n = *(a++);
		if(temp_n < 0){
			sum = sum + ((-1)*temp_n);
		}
		else{
			sum = sum + temp_n;
		}
	}

	return sum;
}

int correctsetsum(int n, int *a){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum = sum + *(a++);
	}

	return sum;
}