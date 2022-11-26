//Iki kelimenin anagram olup olmadigini bulmak.
//Anagram:Ayni harflerle yazilan ama harfler yer degistirirse farkli anlama gelen sozcuktur.
#include<stdio.h>
int main(){
    char kelime1[50],kelime2[50];
    int sonuc;
    printf(">>Birinci kelimeyi yaziniz: ");
    gets(kelime1);
    printf(">>Ikinci kelimeyi yaziniz: ");
    gets(kelime2);
    sonuc=find_anagram(kelime1,kelime2);
    if(sonuc==1)
        printf("==> %s ve %s kelimeler anagramdir.\n",kelime1,kelime2);
    else
        printf("==> %s ve %s kelimeler anagram degildir.\n",kelime1,kelime2);

  return 0;
}
int find_anagram(char kelime1[], char kelime2[])
{
    int num1[26] = {0}, num2[26] = {0}, i = 0;

    while (kelime1[i] != '\0')
    {
        num1[kelime1[i] - 'a']++;
        i++;
    }
    i = 0;
    while (kelime2[i] != '\0')
    {
        num2[kelime2[i] -'a']++;
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (num1[i] != num2[i])
            return 0;
    }
    return 1;
}
