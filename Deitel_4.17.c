/* Senaryoya göre bir banka müþterisine verdiði kredi limitini yarýya düþürmüþtür. Program bizden
1- Müþteri hesap numarasýný, 2- Müþterinin önceki kredi limitini, 3- Müþterinin þu andaki bakiyesini
ister. Her müþterinin yeni kredi limitini hesaplayýp ekrana yazdýrmalý ve hangi müþterinin kredi limitini
aþtýðýný ekrana yazmalýdýr. Ýþlem 3 müþteri için yapýlacaktýr. // YAZAN: Yiðit YILMAZ */
#include <stdio.h>
#include <conio.h>

int main()
{
    int hesap_numarasi, kredi_limiti, yenikredi_limiti, bakiye, sayac;

    for(sayac=1;sayac<=3;sayac++){
        printf("Hesap numaranizi giriniz : ");
        scanf("%d", &hesap_numarasi);

        printf("\nKredi limitinizi giriniz : ");
        scanf("%d", &kredi_limiti);

        printf("\nSu andaki bakiyenizi giriniz : ");
        scanf("%d", &bakiye);

        yenikredi_limiti = kredi_limiti / 2;

        if(bakiye>yenikredi_limiti)
            printf("\nKredi limitinizi asmissiniz!\n\n");
        else
            printf("\nKredi limitinizi asmamissiniz!\n\n");
    }

    getch();
    return 0;
}
