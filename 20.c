/*
 * Her hangi bi ucgenin alani bulmak.
 */
#include<stdio.h>

float alan_hesap(float a,float b,float c)
{
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    float a, b, c, s, alan;
    printf("Ucgenin uc kenarini giriniz: ");
    scanf("%f%f%f",&a,&b,&c);
    printf("Ucgenin alani: %.2f\n", alan_hesap(a,b,c));
    return 0;
}
