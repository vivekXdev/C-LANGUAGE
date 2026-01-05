//WAP to find the roots of quadratic equations.
// ax^2 + bx + c = 0                // a!= 0

#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,D,r1,r2;
    printf("Enter the value of a b and c :");
    scanf("%f %f %f",&a,&b,&c);

    D = b*b-4*a*c;

    if(D > 0 ){
        r1 = (-b + sqrt(D)) /(2*a);
        r2 = (-b - sqrt(D)) /(2*a);
        printf("Two real roots: %.2f and %.2f",r1,r2);
    }
    else if(D == 0){
        r1 = -b/(2*a);
        printf("One real root %.2f",r1);
    }
    else{
        printf("No real root");
    }

    return 0;
}






