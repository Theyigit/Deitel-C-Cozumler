/*Senaryoya göre bir kiþi $1000'ýný bankaya yatýracak, 10 yýl sonunda biriken bileþke faiz ile toplam her yýl sonundaki
para hesaplanacak, bu iþlem %5 %6 %7 %8 %9 %10 faiz oranlarý için ayrý ayrý hesaplanacak.
Bileþke faiz formülü >> n yýl sonra birikecek para = anapara ( 1 + faiz oraný ) ^ yýl sayýsý // YAZAN : Yiðit YILMAZ */
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
