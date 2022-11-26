/*
 * Her hangi bir sayinin faktoriyeli bulmak.
 */

#include <stdio.h>
void main()
{
    int fakt = 1, n;
    printf("Sayiyi giriniz: ");
    scanf("%d", &n);
    if (n <= 0)
    fakt = 1;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fakt = fakt * i;
        }
    }
    printf("%d'in faktoriyeli = %d", n, fakt);
}
