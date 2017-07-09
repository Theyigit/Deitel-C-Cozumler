/* Bir otoparkta 3 saate kadar yapilan parklar 2$ sonraki her saat icinse 0.5$ dýr. Bir arabanin maksimum
24 saat kaldigi dusunuldugu ve odeyecegi en fazla ucretin 10$ olmasi istendi. Ucret hesabinin ayri bir fonksiyonla
yapýlmasi gerekli. // Yazan : Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

 float ucretHesapla(float);

 int main(){

    float araba1, araba2, araba3, ucret1, ucret2, ucret3,
          toplamSaat, toplamUcret;

    printf("1. arabanin saatini giriniz  : ");
    scanf("%f", &araba1);
    printf("\n2. arabanin saatini giriniz  : ");
    scanf("%f", &araba2);
    printf("\n3. arabanin saatini giriniz  : ");
    scanf("%f", &araba3);

    ucret1 = ucretHesapla(araba1);
    ucret2 = ucretHesapla(araba2);
    ucret3 = ucretHesapla(araba3);

    toplamSaat = araba1 + araba2 + araba3;
    toplamUcret = ucret1 + ucret2 + ucret3;


    printf("\n\n");
    printf("%3s%9s%10s", "Araba", "Saat", "Ucret\n\n");
    printf("%3s%11.2f%10.2f\n", "1",araba1,ucret1);
    printf("%3s%11.2f%10.2f\n", "2",araba2,ucret2);
    printf("%3s%11.2f%10.2f\n", "3",araba3,ucret3);
    printf("%3s%8.2f%10.2f\n", "TOPLAM",toplamSaat,toplamUcret);

getch ();
return 0;
 }

 float ucretHesapla(float hesap){

    if(hesap<=3)
        return 2.0;
    else if(hesap<=19)
        return (hesap-3.0)*0.5 + 2.0;
    else
        return 10; }
