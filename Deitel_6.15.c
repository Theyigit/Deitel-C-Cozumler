/* Kullanici klavyeden 10 - 100 arasi 20 sayi girecek eger daha once ayni sayi girilmediyse
   bu sayi ekrana yazdirilacak // YAZAN:Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>
#define BOYUT 20

int main()
{
    int dizi[BOYUT]={},x,y,sayac;

    for(x=0;x<=BOYUT-1;x++){
        printf("%d. sayiyi girin: ", x+1);
        scanf("%d", &dizi[x]);
        printf("\n");
    }

    printf("\n\n  Sadece bir kere girilen sayilar :");
    for(x=0;x<=BOYUT-1;x++){
        sayac=0;
        for(y=0;y<=BOYUT-1;y++){
            if(dizi[x]==dizi[y])
                sayac++;
        }
        if(sayac<2)
            printf("%4d", dizi[x]);
    }

    getch();
    return 0;
}
