/* Three idiots */

#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float x,y;
    printf("X1\n");
    scanf("%d",&x1);
    printf("Y1\n");
    scanf("%d",&y1);
    printf("X2\n");
    scanf("%d",&x2);
    printf("Y2\n");
    scanf("%d",&y2);
    x = (x1+x2)/2.0;
    y = (y1+y2)/2.0;
    printf("Binoy's house is located at (%.1f,%.1f)",x,y);
    return 0;
}