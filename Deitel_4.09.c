/* Bir dizi tamsay�y� toplayan ve girilen ilk say�n�n ka� tane tamsay� toplan�laca��n� belirten say� oldu�unu g�steren bir program istendi.
�rnek olarak 5 say�s� girildi�inde "5 100 200 300 400 500" gibi. //Yazan: Yi�it YILMAZ */

#include <stdio.h>
#include <conio.h>

int main()
{
    int x, sayi, sayac=0, toplam=0;

    scanf("%d", &x);

    for(;sayac<x;sayac++){
        scanf(" %d", &sayi);
        toplam+=sayi;
    }

    printf("Sayilarin toplami: %d", toplam);

    getch();
    return 0;
}
