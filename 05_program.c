//WAP to read three numbers && find biggest of three.
#include <stdio.h>
int main(void){
    int a,b,c;
    printf("Enter any first numbers :");
    scanf("%d",&a);
    printf("Enter any Second numbers :");
    scanf("%d",&b);
    printf("Enter any third numbers :");
    scanf("%d",&c);

    if(a > b && a >c)
        printf("%d is greatest",a); 
    else if(b > a && b >c)
        printf("%d is greatest",b); 
    else
        printf("%d is greatest",c);

    return 0; 
}