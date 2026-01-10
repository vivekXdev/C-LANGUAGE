//WAP to calculate the area of triangle using hero's formula.

#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,s,area;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("Enter the value of c:");
    scanf("%f",&c);
    
    if (a + b > c && a + c > b && b + c > a){

        s = (a + b + c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("the area of triangle is %.2f\n",area);
    }
    else {
        printf("Invalid triangle .The area can not be calculate.\n");
    }

    return 0;
}
