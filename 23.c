/*
 * Her hangi bir string'deki karakterlerinin ASCII degeri.
 */
#include <stdio.h>
int main()
{
    char str[100];
    printf(">>String giriniz: ");
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        printf("==>%c'nin ASCII degeri : %d\n",str[i],(int)str[i]);
        ++i;
    }
    return 0;
}
