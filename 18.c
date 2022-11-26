/*
 * Her hangi bir sayinin kuvvetini bulmak.
 */

#include <stdio.h>

int main()
{
    int taban, kuvvet;
    float us = 1;
    printf("Tabani giriniz: ");
    scanf("%d", &taban);
    printf("Kuvveti yaziniz: ");
    scanf("%d", &kuvvet);
    int kuvv = kuvvet;
    while (kuvv < 0)
    {
        us = us/taban;
        kuvv++;
    }
    while(kuvv>0)
    {
        us = us * taban;
        kuvv--;
    }
    printf("%d ^ %d = %f", taban, kuvvet, us);
    return 0;
}
