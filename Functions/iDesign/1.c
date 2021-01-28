//Area of a Circle

#include<stdio.h>
float calcarea(float x);
int main(){
    float radius, area;
    scanf("%f",&radius);
    area=calcarea(radius);
    printf("The area of the circle is %.2f ",area);
    return 0;
}
float calcarea(float x){
    float area=3.14*x*x;
    return area;
}