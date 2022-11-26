/*
 * Desimal sayilarinin octal'a donusturulmesi.
 */
#include <stdio.h>

int main()
{
    long desimalsayi, kalan, bolum,octalsayi=0;
    int octalSayi[100], i = 1, j;

    printf("Desimal degeri giriniz: ");
    scanf("%ld", &desimalsayi);
    kalan = desimalsayi;
    while (kalan != 0)
    {
        octalSayi[i++] = kalan % 8;
        kalan = kalan / 8;
    }
    for (j = i - 1; j > 0; j--)
        octalsayi = octalsayi*10 + octalSayi[j];
    printf("%d desimal degerinin octal karsiligi: %d  ", desimalsayi,octalsayi);
    return 0;
}
