// 1 ile n arasindaki cift ve tek sayilarin toplamini hesaplamak.
#include<stdio.h>
int main(){
    int i, cift_toplam=0, tek_toplam=0,num;
    printf("Sayinin degerini giriniz:");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            cift_toplam = cift_toplam + i;
        else
             tek_toplam = tek_toplam + i;
    }
    printf("Tum cift sayilarin toplami = %d\n",  cift_toplam);
    printf("Tum tek sayilarin toplami = %d\n", tek_toplam);

  return 0;
}
