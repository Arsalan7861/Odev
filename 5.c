//Iki sayi arasindaki cift sayilari Bulmak.
#include<stdio.h>
void main(){
    int i,max,min;
    printf(">>Isteginiz maximum sayiyi giriniz: ");
    scanf("%d",&max);
    printf(">>Isteginiz minimum sayiyi giriniz: ");
    scanf("%d",&min);
    printf("%d ve %d numaralar arasindaki cift sayilar: ",min,max);
    if(min%2!=0)
    {
        min++;
    }
    for(i=min;i<=max;i=i+2)
    {
        printf("%d\t",i);
    }


}
