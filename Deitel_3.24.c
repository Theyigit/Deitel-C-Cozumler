#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int sayac, sayi, enBuyuk;
    sayac=0;
    enBuyuk=0;

    printf("Lutfen bir sayi giriniz(10 sayi oluncaya kadar devam edecektir): ");
    scanf("%d", &sayi);

    while(sayac<=8){

        sayac+=1;
        printf("Lutfen bir sayi giriniz(10 sayi oluncaya kadar devam edecektir): ");
        scanf("%d", &sayi);
    if(sayi>=enBuyuk) enBuyuk=sayi;

    }

    printf("Girdiginiz 10 sayidan en buyugu %d!", enBuyuk);

    getch();
    return 0;
}
