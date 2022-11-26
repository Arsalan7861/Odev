//Vize ve final notlarinin ortalamisini bulmak.
#include<stdio.h>
int main(){
    int vize,final;
    float sonuc;
    printf("Sistemden cikmak icin 111 giriniz!\n");
    while(vize){
    printf("Vize notunuzu giriniz: ");
    scanf("%d",&vize);
    if(vize==111)
        break;
    printf("Final notunuzu giriniz: ");
    scanf("%d",&final);
    sonuc=vize*0.6+final*0.4;
    printf("Ortalama:%.2f\n",sonuc);
    }
    return 0;
}
