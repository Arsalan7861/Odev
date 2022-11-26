/*
 * Binary Sayiyi octal'a donusturmek.
 */
 #include <stdio.h>

int main()
{
    long int binarysayi, octalsayi = 0, j = 1, kalan;
    printf("Binary sayiyi giriniz: ");
    scanf("%ld", &binarysayi);
    while (binarysayi != 0)
    {
        kalan = binarysayi % 10;
        octalsayi = octalsayi + kalan * j;
        j = j * 2;
        binarysayi = binarysayi / 10;
    }
    printf("Sayinin octal karsiligi: %lo", octalsayi);
    return 0;
}
