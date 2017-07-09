/* Saati saat,dakika,saniye cinsinden alan ve iki saat arasindaki farki 12lik saat dilimine gore hesaplayan program yaziniz.
// YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

int main()
{
    int x,y,z,dakika,saat,sure;

    printf("Saati giriniz    :");
    scanf("%d", &x);
    printf("\nDakikayi giriniz :");
    scanf("%d", &y);
    printf("\nSaniyeyi giriniz :");
    scanf("%d", &z);

    saat = x*3600;
    dakika = y*60;

    sure = saat + dakika + z;

    printf("\n\nSaat 12'den %d saniye sure gecmistir.", sure);

    getch();
    return 0;
}
