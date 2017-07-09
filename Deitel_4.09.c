/* Bir dizi tamsayýyý toplayan ve girilen ilk sayýnýn kaç tane tamsayý toplanýlacaðýný belirten sayý olduðunu gösteren bir program istendi.
Örnek olarak 5 sayýsý girildiðinde "5 100 200 300 400 500" gibi. //Yazan: Yiðit YILMAZ */

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
