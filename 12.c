/* Bir sayinin rakamlarinin toplamini hesaplamak.*/

#include <stdio.h>

int main()
{
    int sayi, toplam = 0, kalan;
    printf(">>Sayiyi giriniz: ");
    scanf("%d", &sayi);
    while (sayi != 0)
    {
        kalan = sayi % 10;
        toplam = toplam + kalan;
        sayi = sayi / 10;
    }
    printf("==>Sayinin rakamlarinin toplami : %d\n", toplam);
    return 0;
}
