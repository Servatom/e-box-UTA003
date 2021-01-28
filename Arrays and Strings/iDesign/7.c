/* Matrix Multiplication */

#include <stdio.h>
int main(){
    int m, A[10][10], B[10][10], C[10][10];
    scanf("%d", &m);
    for(int i = 0; i < m; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &A[i][j]);

    for(int i = 0; i < m; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &B[i][j]);    

    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < m; ++j) {
          C[i][j] = 0;
         for (int k = 0; k < m; k++) {
            C[i][j] += A[i][k] * B[k][j];
         }
      }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}