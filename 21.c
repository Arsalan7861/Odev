/*
 * Bir dik ucgenin alanini bulmak.
 */
#include <stdio.h>

int main()
{
    float yukseklik, genislik;
    float alan;

    printf(">>Ucgenin yuksekligi ve genisligini giriniz: ");
    scanf("%f%f", &yukseklik, &genislik);
    alan = 0.5 * yukseklik * genislik;
    printf("==>Dik ucgenin alani: %.3f\n", alan);
    return 0;
}
