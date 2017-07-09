/*Senaryoya g�re bir ki�i $1000'�n� bankaya yat�racak, 10 y�l sonunda biriken bile�ke faiz ile toplam her y�l sonundaki
para hesaplanacak, bu i�lem %5 %6 %7 %8 %9 %10 faiz oranlar� i�in ayr� ayr� hesaplanacak.
Bile�ke faiz form�l� >> n y�l sonra birikecek para = anapara ( 1 + faiz oran� ) ^ y�l say�s� // YAZAN : Yi�it YILMAZ */
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int yil, sayac;
    double miktar, anapara = 1000.0, oran=0.5;

    for(sayac=5;sayac<=10;sayac+=1){
        printf("Yuzde %d faiz orani icin : \n\n", sayac);
        printf("%4s%21s\n", "Yil", "Depozito Miktari\n");

        for(yil=1;yil<=10;yil++){
            miktar = anapara * pow(1.0+oran,yil);
            printf("%3d%21.2f\n\n",yil,miktar);
        }
        oran+=0.1;
    }

    getch();
    return 0;
}
