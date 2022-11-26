/* Bir numaranin tersini yazmak. */

#include <stdio.h>

int main()
{
    long sayi, tersi = 0,sayi1, kalan;
    printf("Sayiyi giriniz: ");
    scanf("%ld", &sayi);
    sayi1 = sayi;
    while (sayi > 0)
    {
        kalan = sayi % 10;
        tersi = tersi * 10 + kalan;
        sayi /= 10;
    }
    printf("Girilen numara = %ld\n", sayi1);
    printf("Numaranin tersi = %ld\n", tersi);
}
