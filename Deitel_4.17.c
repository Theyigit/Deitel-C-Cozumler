/* Senaryoya g�re bir banka m��terisine verdi�i kredi limitini yar�ya d���rm��t�r. Program bizden
1- M��teri hesap numaras�n�, 2- M��terinin �nceki kredi limitini, 3- M��terinin �u andaki bakiyesini
ister. Her m��terinin yeni kredi limitini hesaplay�p ekrana yazd�rmal� ve hangi m��terinin kredi limitini
a�t���n� ekrana yazmal�d�r. ��lem 3 m��teri i�in yap�lacakt�r. // YAZAN: Yi�it YILMAZ */
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
