/*
 * Binary degerini desimele donusturmek.
 */
#include <stdio.h>
#include <math.h>
int main()
{
    int numara;
    int toplam = 0;
    printf(">>Binary sayiyi giriniz: ");
    scanf("%d", &numara);
    for (int i = 0; numara != 0; i++)
    {
        toplam += (numara % 10) * pow(2, i);
        numara /= 10;
    }
    printf("==>Binary numaranin desimal karsiligi %d dir", toplam);
    return 0;
}
