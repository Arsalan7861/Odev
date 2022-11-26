/*
 * Bir sayinin asal olup olmadigini hesaplamak.
 */

#include <stdio.h>
void main()
{
    int sayi, j, flag;
    printf("Sayiyi giriniz: ");
    scanf("%d", &sayi);
    if (sayi <= 1)
    {
        printf("%d asal sayi degildir. \n", sayi);
        exit(1);
          }
    flag = 0;
    for (j = 2; j <= sayi / 2; j++)
    {
        if ((sayi % j) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d asal bir sayidir. \n", sayi);
     else
        printf("%d asal bir sayi degildir. \n", sayi);
}
