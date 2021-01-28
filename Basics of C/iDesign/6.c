
/* Quadratic Equation Roots */
#include <stdio.h>
#include <math.h>
int main(){
    int a, b,c;
    double discriminant, root1,root2;
    printf("Enter the values of a,b,c :\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    discriminant = b * b - 4 * a * c;
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("The roots are:\nroot1 = %.1lf\nroot2 = %.1lf",root1,root2);
    return 0;
}