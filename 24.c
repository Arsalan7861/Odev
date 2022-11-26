/*
 * Verilen gunlerin sayisini yil,hafta ve gun olarak yazdirmak.
 */
#include <stdio.h>
#define Haftanin_gunleri 7

void main()
{
    int ngun, yil, hafta, gunler;

    printf(">>Gunlerin sayisini giriniz: ");
    scanf("%d", &ngun);
    yil = ngun / 365;
    hafta =(ngun % 365) / Haftanin_gunleri;
    gunler =(ngun % 365) % Haftanin_gunleri;
    printf ("==>%d gun %d yil, %d hafta ve %d gune denk gelir.",ngun, yil, hafta, gunler);
}
