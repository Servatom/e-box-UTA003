/*
    Distance between 2 points
*/

#include <stdio.h>
#include <math.h>

float distance(int *x1, int *y1, int *x2, int *y2);

int main(){
    int x1, y1;
    int x2, y2;

    printf("Enter x1\n");
    scanf("%d", &x1);

    printf("Enter y1\n");
    scanf("%d", &y1);

    printf("Enter x2\n");
    scanf("%d", &x2);

    printf("Enter y2\n");
    scanf("%d", &y2);

    float dist = distance(&x1,&y1, &x2, &y2);
    printf("Distance between 2 points is %.2f", dist);
    return 0;
}

float distance(int *x1, int *y1, int *x2, int *y2){
    float dist_sqr = ((*x1 - *x2)*(*x1 - *x2)) + ((*y1 - *y2)*(*y1 - *y2));
    float dist = sqrt(dist_sqr);
    return dist;
}