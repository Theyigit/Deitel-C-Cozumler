/*Senaryoya göre bir pazarlama þirketi 5 çeþit satmaktaydý. Bu ürünlerin perakende fiyatlarý
2.98, 4.50, 9.98, 4.49, 6.87 þeklindeydi. Bir günde yapýlan satýþ miktarýný kullanýcýdan alarak
bir ürün ve bütün ürünler için toplam satýþ miktarýný switch yapýsýyla oluþturulan bir program
istenildi. // YAZAN: Yiðit YILMAZ */
#include <stdio.h>
#include <conio.h>

int main()
{
    int not=1;
    float x,y,z,t,a,b,c,d,e,f, toplam;

        switch(not){

        case 1:
            printf("Sattiginiz urun sayisini giriniz : ");
            scanf("%f", &x);
            y= x * 2.98;
            printf("\nBirinci urunden kazanciniz %.3f\n", y);

        case 2:
            printf("\nSattiginiz urun sayisini giriniz : ");
            scanf("%f", &z);
            t= z * 4.50;
            printf("\nIkinci urunden kazanciniz %.3f\n", t);

        case 3:
            printf("\nSattiginiz urun sayisini giriniz : ");
            scanf("%f", &a);
            b= a * 9.98;
            printf("\nUcuncu urunden kazanciniz %.3f\n", b);

        case 4:
            printf("\nSattiginiz urun sayisini giriniz : ");
            scanf("%f", &c);
            d= c * 4.49;
            printf("\nDorduncu urunden kazanciniz %.3f\n", d);

        case 5:
            printf("\nSattiginiz urun sayisini giriniz : ");
            scanf("%f", &e);
            f= e * 6.87;
            printf("\nBesinci urunden kazanciniz %.3f\n", f);

            }
        toplam = f+d+b+t+y;

        printf("\n Toplam kazanciniz: %.3f", toplam);


    getch();
    return 0;
}
