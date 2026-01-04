//WAP to change distance km to meter,feet,inches,centimeter.
#include <stdio.h>

int main(void) {
    float km , meter,feet,inches,centimeter;
    printf("Enter the distance in km :");
    scanf("%f",&km);
    meter = km*1000;
    centimeter = meter*100;
    inches = (centimeter)/2.54;
    feet = (inches)/12;
    printf("Meter = %.2f \n",meter);
    printf("Feet = %.2f \n",feet);
    printf("Inches = %.2f \n",inches);
    printf("Centimeter = %.2f \n",centimeter);
    return 0;
}