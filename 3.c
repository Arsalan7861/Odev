//Uc sayinin ortalamasini bulmak.
#include<stdio.h>
int main(){
    int a,b,c;
    float ort;
    printf("Sistemden cikmak icin 111 giriniz!\n");
    while(a){
    printf("Birinci sayiyi yaziniz: ");
    scanf("%d",&a);
    if(a==111)
        break;
    printf("Ikinci sayiyi yaziniz: ");
    scanf("%d",&b);
    printf("Ucuncu sayiyi yaziniz: ");
    scanf("%d",&c);
    ort=(a+b+c)/3;
    printf("Ortalama:%.2f\n",ort);
    }
 return 0;
}
