/*
 * Binary numaranin toplami bulmak.
 */
#include <stdio.h>
int main()
{

    long binary1, binary2;
    int i = 0 , kalan = 0, toplam[20];

    printf("Birinci binary numarayi giriniz: ");
    scanf("%ld", &binary1);
    printf("ikinci binary numarayi giriniz: ");
    scanf("%ld", &binary2);
    while (binary1 != 0 || binary2 != 0)
    {
        toplam[i++] =(binary1 % 10 + binary2 % 10 + kalan) % 2;
        kalan =(binary1 % 10 + binary2 % 10 + kalan) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (kalan != 0)
        toplam[i++] = kalan;
    --i;
    printf("Iki binary numaranin toplami: ");
    while (i >= 0)
        printf("%d", toplam[i--]);
    return 0;
}
