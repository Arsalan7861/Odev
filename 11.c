//Sayilarin negatif veya positif olup olmadigini gostermek.
#include <stdio.h>
void main()
{
    float sayi;

    printf("Sayiyi giriniz: ");
    scanf("%f", &sayi);
    if (sayi >= 0)
        printf("%.2f positif sayidir. \n", sayi);
    else
        printf("%.2f negatif sayidir. \n", sayi);
}
