//Her hangi bir dairenin alani bulmak.
#include <stdio.h>
#define pi 3.141592
int main()
{
    float yaricap;
    printf(">>Enter Radius of Circle: ");
    scanf("%f",&yaricap);
    float alan=pi*yaricap*yaricap;
    printf("==>%.2f yaricapi olan dairenin alani : %0.2f",yaricap,alan);
    return 0;
}
