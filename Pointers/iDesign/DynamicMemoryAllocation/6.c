/*
    Functions-Matrix Maximum
*/

#include <stdio.h>
#include <stdlib.h>

int findMax(int **a, int m, int n){
    int i, j, max = 0;
    for(i = 0; i <= m-1; i++){
        for(j = 0; j <= n-1; j++){
            if(max<a[i][j]){
                max = a[i][j];
            }
        }
    }

    return max;
}

int main(){
    int* a[20];
    int i, j, r, c, s = 0;
    printf("Enter the number of rows in the matrix\n");
    scanf("%d", &r);
    printf("Enter the number of columns in the matrix\n");
    scanf("%d", &c);
    printf("Enter the elements in the matrix\n");

    for(i = 0; i <= r-1; i++){
        a[i] = malloc(sizeof(int)*c);
        for(j = 0; j <= c-1; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is\n");
    for(i = 0; i <= r-1; i++){
        for(j = 0; j <= c-1; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    s = findMax(a,r,c);
    printf("The maximum element in the matrix is %d", s);

    for(i = 0; i<r; i++){
        free(a[i]);
    }
    return 0;
}