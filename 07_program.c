//WAP to find greatest of two number.
#include <stdio.h>
int main(void){
    int a , b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter Second number :");
    scanf("%d",&b);

    //Comparsion usinf if else
    if(a > b)
    printf("%d is geatest",a);
    else
    printf("%d is greatest",b);
    return 0;
}