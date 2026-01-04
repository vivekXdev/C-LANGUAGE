//WAP to read the radius of a circle and to find the area and circumference.
#include <stdio.h>
#define PI 3.14
int main(void) {
        float radius , circumfrence , area ;
        printf("Enter the radius of circle :");
        scanf("%f",&radius);
        circumfrence = 2 * PI*radius;
        area = PI  *radius*radius;
        printf("Circumfrence = %f \n",circumfrence);
        printf("Area = %f",area);
        return 0;  
}