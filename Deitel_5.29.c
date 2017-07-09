/* Girilen iki sayinin obebini bulan program istendi. Fonksiyon kullanilmalidir. //YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

int obeb(int x, int y);

int main()
{
    int a,b;

    printf("Obeblerini bulmak istediginiz sayilari girin :\n");
    scanf("%d%d", &a, &b);
    printf("\n\n%d ve %d sayilarinin obebi : \n\n%d", a,b,obeb(a,b));

    getch();
    return 0;
}

int obeb(int x, int y){

    int z,maks, min,sonuc;

    maks=x;
    min=y;

    if(y>x)
        maks=y;
        min=x;

    for(z=1;z<=(maks-(maks-min));z++){

        if(x%z==0 && y%z==0)
            sonuc=z;

    }
    return sonuc;
}
