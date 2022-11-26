/*
 * Octal sayiyin binary'e donusturulmesi.
 */
#include <stdio.h>
#define MAX 1000

int main()
{
    char octalsayi[MAX];
    long i = 0;
    printf(">>Enter any octal number: ");
    scanf("%s", octalsayi);
    printf("==>Equivalent binary value: ");
    while (octalsayi[i])
    {
        switch (octalsayi[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        default:
            printf("\n Invalid octal digit %c ", octalsayi[i]);
            return 0;
        }
        i++;
    }
    return 0;
}
