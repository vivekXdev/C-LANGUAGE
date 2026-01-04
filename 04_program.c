//WAP to input 4 digit number and calculate the sum of  first and last digit of this number.
#include <stdio.h>
int main(void){
    int num ,d1,d2,sum;
    printf("Enter a four digit number :");
    scanf("%d",&num);
    d1 = num/1000;
    d2 = num % 10;
    sum = d1+d2;
    printf("sum of first and last digit is = %d",sum);
    return 0;
}


