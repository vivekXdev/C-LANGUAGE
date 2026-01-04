//WAP to rotate the value of as x has y,y has z and z has x
#include <stdio.h>
int main(void) {
    int x = 1,y = 2,z = 3,temp;
    temp = x;
    x = y;
    y = z;
    z = temp;
    printf("X = %d\n",x);
    printf("Y = %d\n",y);
    printf("Z = %d\n",z);
    return 0 ;
}